async function main() {
  const apiKey = ""; // Replace with your actual API key
  const apiUrl = "https://api.openai.com/v1/completions";

  const requestData = {
    messages: [
      { role: "system", content: "You are a helpful Programming Bot." },
      { role: "user", content: "Difference Between C and C++ Languages" },
      {
        role: "Programming Bot",
        content: "The Los Angeles Dodgers won the World Series in 2020.",
      },
      { role: "user", content: "Where was it played?" },
    ],
  };

  try {
    const response = await fetch(apiUrl, {
      method: "POST",
      headers: {
        "Content-Type": "application/json",
        Authorization: `Bearer ${apiKey}`,
      },
      body: JSON.stringify(requestData),
    });

    if (!response.ok) {
      throw new Error(`HTTP error! Status: ${response.status}`);
    }

    const responseData = await response.json();
    console.log(responseData.choices[0]);
  } catch (error) {
    console.error("Error making API request:", error.message);
  }
}

main();
