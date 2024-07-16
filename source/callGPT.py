import dashscope
import sys

# 如果环境变量配置无效请启用以下代码
# dashscope.api_key = 'YOUR_DASHSCOPE_API_KEY'

def generate_feedback(Question,fullScore,Answer,student_answer):
    prompt_template = '''
    你是一位经验丰富的教师，负责对学生的试题答案进行评分。请根据以下评分标准对学生的答案进行详细评分，并提供反馈意见。

    评分标准：
    1. 正确性：答案是否正确。
    2. 完整性：答案是否完整，是否包含所有必要的信息。
    3. 逻辑性：答案是否逻辑清晰，是否有条理。
    4. 表达：答案的语言表达是否清晰、准确。

    试题和答案如下：
    试题：{Question}
    满分：{fullScore}
    标准答案：{Answer}
    学生的答案：{student_answer}

    请根据评分标准对学生的答案进行评分，你只需给出总分(int类型的整数），并提供详细的反馈意见（文本）。
    返回格式：
    总分:<score>
    反馈意见：<feedback>
    '''

    prompt = prompt_template.format(Question=Question,fullScore=fullScore,Answer=Answer,student_answer=student_answer)
    response = dashscope.Generation.call(model=dashscope.Generation.Models.qwen_turbo, prompt=prompt)

    # 解析返回结果
    result = response.output['text']
    score_line = result.split('\n')[0]
    feedback_line = result.split('\n')[1]
    
    score = int(score_line.split('：')[1])
    feedback = feedback_line.split('：')[1]
    
    return score, feedback

if __name__ == "__main__":
    Question = sys.argv[1]
    fullScore = int(sys.argv[2])
    Answer = sys.argv[3]
    student_answer = sys.argv[4]

    score, feedback = generate_feedback(Question, fullScore, Answer, student_answer)
    print(score)
    print(feedback)