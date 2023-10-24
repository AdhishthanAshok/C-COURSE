const url = "https://weatherapi-com.p.rapidapi.com/current.json?q=india";
const options = {
  method: "GET",
  headers: {
    "X-RapidAPI-Key": "05d4449ebemsh26f52f204d83b58p14a84bjsne331f949f69b",
    "X-RapidAPI-Host": "weatherapi-com.p.rapidapi.com",
  },
};

try {
  const response = await fetch(url, options);
  const result = await response.text();
  console.log(result);
} catch (error) {
  console.error(error);
}
