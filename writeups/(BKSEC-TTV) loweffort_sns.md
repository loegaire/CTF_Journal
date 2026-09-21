---
title: 'loweffsns '

---

Server được build bằng go. 
thực hiện mở instance docker và tương tác. 
di chuyển trong dir, tìm được vài thông tin: 
cat low-effort-sns-2/docs/swagger.json 
trường này có thể exploit được:
```
"model.CreatePostReq": {
            "type": "object",
            "properties": {
                "content": {
                    "type": "string"
                },
                "is_private": {
                    "description": "need convert to true or something here",
                    "type": "string"
                },
                "name": {
                    "type": "string"
                }
            }
        },
```