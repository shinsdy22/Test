// #include <stdio.h>

// main() {
//   printf("사용자명을 입력해주세요 : ");
//   char name[500];
//   scanf("%s", &name);
//   printf("사과:1 키위:2 수박:3 복숭아:4\n");
//   printf("%s님이 좋아하는 과일의 번호를 한 개 선택해주세요 : ", name);

//   int ans;
//   scanf("%d", &ans);

//   if (ans == 1) {
//     printf("%s님은 사과를 좋아하시는군요!!", name);
//   } else if (ans == 2) {
//     printf("%s님은 키위를 좋아하시는군요!!", name);
//   } else if (ans == 3) {
//     printf("%s님은 수박를 좋아하시는군요!!", name);
//   } else if (ans == 4) {
//     printf("%s님은 복숭아를 좋아하시는군요!!", name);
//   } else {
//     printf("%s님이 좋아하시는 과일을 입력해주세요 : ", name);
//     char fruit[500];
//     scanf("%s", &fruit);
//     printf("%s님은 %s를 좋아하시는군요!! : ", name, fruit);
//   }
//   printf("end");
// }