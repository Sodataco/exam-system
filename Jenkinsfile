pipeline{
	agent any
	
	environment{
		GIT_REPO_URL = 'https://github.com/whuyu/exam-system'
		IMAGE_NAME = 'exam-pipeline'
		IMAGE_TAG = 'v1'
		DOCKER_REGISTRY = 'http://10.0.2.15:5000/v2/'
		CONTAINER_NAME = 'exam--system-pipeline'
	}
		
	stages{
		stage('检出') {
			steps {
				checkout([$class: 'GitSCM', branches: [[name: '*/main']],userRemoteConfigs: [[url:"${GIT_REPO_URL}"]]])
			}
		}
		
		stage('构建并推送镜像'){
			steps {
				script{
					docker.withRegistry(DOCKER_REGISTRY) {
						dockerImage = docker.build("${IMAGE_NAME}:${IMAGE_TAG}", '-f Dockerfile .')
						dockerImage.push()
					}
				}
			}
		}
		
		stage('执行 Docker 命令') {
			steps{
				script{
					sh 'echo "Pulling Docker image.."'
					sh 'echo "Checking for existing container..."'
					sh """
						if docker ps -a | grep -q "${CONTAINER_NAME}"; then
							echo "Stopping and removing existing container..."
							docker stop ${CONTAINER_NAME}
							docker rm ${CONTAINER_NAME}
						fi
					"""
					sh 'echo "Starting new container..."'
					sh "docker run -d -p 5555:5000 --name ${CONTAINER_NAME} ${IMAGE_NAME}:${IMAGE_TAG}"
				}
			}
		}
	}
}
