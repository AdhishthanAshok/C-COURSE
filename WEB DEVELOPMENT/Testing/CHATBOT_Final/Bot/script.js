async function sendMessage() {
  const userInput = document.getElementById("userInput");
  const chatBody = document.getElementById("chatBody");

  // Get user input
  const userMessage = userInput.value;

  // Append user message to the chat body
  const userMessageElement = document.createElement("div");
  userMessageElement.className = "user-message";
  userMessageElement.textContent = userMessage;
  chatBody.appendChild(userMessageElement);

  // Display loading message while waiting for the bot's response
  const loadingMessageElement = document.createElement("div");
  loadingMessageElement.className = "loading-message";
  loadingMessageElement.textContent = "Generating the response....";
  chatBody.appendChild(loadingMessageElement);

  // Simulate bot response (replace with actual chatbot API call)
  const url = "https://robomatic-ai.p.rapidapi.com/api";
  const options = {
    method: "POST",
    headers: {
      "content-type": "application/x-www-form-urlencoded",
      "X-RapidAPI-Key": "05d4449ebemsh26f52f204d83b58p14a84bjsne331f949f69b",
      "X-RapidAPI-Host": "robomatic-ai.p.rapidapi.com",
    },
    body: new URLSearchParams({
      in: userMessage,
      op: "in",
      cbot: "1",
      SessionID: "RapidAPI1",
      cbid: "1",
      key: "RHMN5hnQ4wTYZBGCF3dfxzypt68rVP",
      ChatSource: "RapidAPI",
      duration: "1",
    }),
  };

  try {
    const response = await fetch(url, options);
    const result = await response.json();

    // Extract the "out" value from the response
    const botResponse = result.out;

    // Remove the loading message
    chatBody.removeChild(loadingMessageElement);

    // Display the bot's response in a new paragraph
    const botMessageElement = document.createElement("div");
    botMessageElement.className = "bot-message";
    botMessageElement.textContent = botResponse;
    chatBody.appendChild(botMessageElement);
  } catch (error) {
    console.error(error);
  }

  // Clear user input
  userInput.value = "";

  // Scroll to the bottom of the chat body
  chatBody.scrollTop = chatBody.scrollHeight;
}
