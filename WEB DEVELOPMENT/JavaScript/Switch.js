let grade = 48;

switch (true) {
  case grade >= 90:
    console.log("You did Outstanding");
    break;
  case grade >= 80:
    console.log("You did Excellent");
    break;
  case grade >= 70:
    console.log("You did Very Good");
    break;
  case grade >= 60:
    console.log("You did Good");
    break;
  case grade >= 50:
    console.log("You did Fair");
    break;
  case grade >= 40:
    console.log("You can do better");
    break;
  case grade >= 33:
    console.log("You barely Passed..");
    break;
  case grade < 33:
    console.log("You Failed..");
    break;
  default:
    console.log(grade, "is not a Grade.");
}
