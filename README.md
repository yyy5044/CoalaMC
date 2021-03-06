팀 이름 : 코딩 청정수

만들고자 한 마인크래프트 월드 소개:

저희 팀은 도시를 만들었습니다.
고층 빌딩과 아파트, 도로 위를 지나가는 자동차, 예쁜 모양의 조형물 등등
저희가 상상하는 도시를 만들었습니다.
고리타분하고 지루한 건물 패턴과는 달리 높고 다양한 패턴이 섞인 빌딩과 조형물, 그리고
인도와 도로가 너무나도 좁은 저희 대학로에서 벗어나 쾌적하고 넓은 강과 도로가 특징입니다.

함수 설명:

함수는 일단 기본 기능을 제공하는 함수들을 만들었습니다.
기본 기능 함수는 건물, 조형물, 바닥 세 종류로 나눌 수 있습니다.

기본 기능을 제공하는 함수가 많이 필요할 시에는 그 함수들을 뭉쳐서
함수이름 뒤에 merge라는 단어를 언더바로 이어 붙였습니다.

예를 들어 아파트가 모여 아파트 단지가 되었다면 apart_merge입니다.
두 세번 밖에 반복하지 않는다면 굳이 merge로 만들지 않고 좌표를 손수 입력하였습니다.
(x, y, z)가 붙는 함수들이 그런 함수입니다.

- infra 함수 : 도로, 강, 다리, 자동차, 버스, 나무, 분수 등 조형물들과 도로 공사의 역할
< infra에 속한 함수들 >

river 함수 : 도시 중간에 가로로 강을 만듭니다.

road_merge 함수 : 
road1~road6함수를 실행합니다.
road1 : 세로줄 도로
road2 : 가로줄 도로
road3 : 오른쪽 하단 도로
road4 ~ road6 : 세로와 가로줄이 겹치면서 망가지는 부분을 수정

bridge_merge 함수 :
bridge를 반복문을 통해 z방향을 늘려가며 설치합니다.

car_merge 함수 :
반복문을 통해 도로 위에 자동차를 설치합니다.

car1, car2, blue_car1, blue_car2
기본 car은 빨강입니다.
blue_car은 파랑색 자동차압니다.
숫자는 방향을 나타냅니다.

bus_merge 함수 :
gasstation 뒤에 버스들을 생성합니다.

smalltree_river 함수 :
강가의 빈 공간에 작은 나무들을 설치합니다.
bigtree_river 함수 :
강가의 빈 공간에 큰 나무들을 설치합니다.

fountain_merge 함수 :
개발자가 정한 위치에 분수를 설치합니다.

- jaeseong 함수 : 조원 박재성이 건설한 건물들을 설치합니다.

clock_tower(); 시계탑을 설치합니다.

nice_apart(); 하양색과 빨강색이 섞인 모양의 아파트를 설치합니다.

spiral_merge(); 나선형 모양의 빌라 단지를 설치합니다. 다이아몬드 블럭으로 만들었습니다.

spiralgold_merge(); 나선형 모양의 빌라 단지를 설치합니다. 황금 블럭으로 만들었습니다.

square_apart(); 사각형 모양의 아파트를 설치합니다.



- jihak 함수 : 조원 이지학이 건설한 건물들을 설치합니다.

eiffeltower(); 에펠탑을 설치합니다.

gasstation(x,y,z)); 주유소를 설치합니다.

parthenon(); 파르테논 신전을 설치합니다.

limeorange_apart_merge(); 라임과 오렌지 색의 아파트 단지를 설치합니다.

stair_house_merge(); 계단이 있는 주택 단지를 설치합니다.



- nahyun 함수 : 조원 이나현이 건설한 건물들을 설치합니다.

house_merge(); 문어발 아파트 단지를 설치합니다.

modernhouse_merge(); 현대식 주택 단지를 설치합니다.

apartment(); 유리가 많은게 특징인 아파트를 설치합니다.

twinbuilding(); 쌍둥이 빌딩을 설치합니다.

cu(x,y,z)); 편의점 CU를 설치합니다.



- yangho 함수 : 조원 오양호가 건설한 건물들을 설치합니다.

church(); 성전을 설치합니다.

company(); 회사 빌딩을 설치합니다.

hospital(); 병원을 설치합니다.

hotel(); 호텔을 설치합니다.

lotte(); 롯데타워를 설치합니다.

round_apart(); 둥근 아파트를 설치합니다.





도시 소개 유튜브 영상 링크 : 
https://youtu.be/WTFj-ZM0OAg
