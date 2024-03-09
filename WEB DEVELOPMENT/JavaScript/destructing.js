const course = {
  courseName: "JS",
  price: "999",
  courseInstructor: "Sirji",
};

course.courseInstructor; // That's how we access the values

// For printing it again and again .. we should use this

// const { courseInstructor } = course;
// console.log(courseInstructor);   // Output : Sirji

const { courseInstructor: teacher } = course; // We can also rename as the name is long , we can call it teacher for easy use
console.log(teacher);


// {
//     "courseName": "JS",
//     "price": "999",
//     "courseInstructor": "Sirji",
// }