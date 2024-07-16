import requests

server_ip = '182.92.153.163'
query = input('Enter your query: ')
response = requests.post(f'http://{server_ip}:5000/query', data={'query': query})

# 打印响应内容以进行调试
print('Response status code:', response.status_code)
print('Response content:', response.text)

try:
    result = response.json()['result']
    print('Result:', result)
except requests.exceptions.JSONDecodeError:
    print('Error: Response is not valid JSON')
