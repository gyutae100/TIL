# 데이터 플랫폼인 크라우드웍스의 대용량 데이터로 돈 버는 방법
 - 장정석(크라우드 웍스 CTO)

## GIG Economy
 - ?

## Big Query? 

## 질문
 - 김규태
    질문] 도전: 차세대 플랫폼이 대략적으로 로우코드, 노코드로 이해가 되는데 이 기능의 부족한 점은 어떤 부분이 있나요?
     - 답변
       - Lina (Aterilio) 분의 질문의 답변으로 대체
            ​사용자가 직접 조립(?)할 수 있는 플랫폼이라니 프론트엔드 쪽이 특히 어려울 것 같은 느낌이네요
     - 답변2
        - 추가 질문
          - 아마 B2B 이기 때문에(추측) 사용성에 대한 최소 기준점이 조금 낮아도 되지 않기 때문이지 않을까 싶습니다.
 - 김규태
   - 질문]
     - 도전: 차세대 작업 분배 시스템은 우선순위 큐방식이 아닌 가중치 방식을 통해 우선순위를 정하는 것으로 추측되는데(레디스도 잘 모르는 상태에서 질문), 이 경우 우선순위 큐방식에 비해 트레이드 오프상 단점이 무엇이 있었나요?
       - 답변
         - (우선순위 큐보다) 선입선출로 가정 시, incremental 한 포인트 형식으로 개선.  
 - 김규태
    도전: 클라우드 스토리지 활용에서, 클라우드 웍스의 클라이언트사는 클라우드 스토리지에서 사용하지 못하는 private한 정보에 대한 허들이 낮거나 없나요? 만약 private 정보의 기준점이 존재한다면 private한 정보는 전통적인 방식을 혼합해서 해결해야 하나요?
    ​아니면 private한 정보도 클라우드 스토리지를 통해 해결할 수 있는 방안이 있을까요?
     - 답변
       - private 데이터에 대해서 질문주셨는데요. 좋은 질문 감사합니다. 최적화된 방법을 구체적인 요건에 따라 고민을 계속해야 하는 문제로 생각됩니다. 클라우드 스토리지도 외부(인터넷 환경)으로 부터 완전히 접근을 차단할 수는 있습니다. 접근을 허용해야하는 상황에 따라 말씀하신데로 클라우드가 아닌 별도의 저장소를 고려해야 할 것같아요.

## 추가 내용 기입 필요