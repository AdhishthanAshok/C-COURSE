const url = 'https://robomatic-ai.p.rapidapi.com/api';
const options = {
	method: 'POST',
	headers: {
		'content-type': 'application/x-www-form-urlencoded',
		'X-RapidAPI-Key': '05d4449ebemsh26f52f204d83b58p14a84bjsne331f949f69b',
		'X-RapidAPI-Host': 'robomatic-ai.p.rapidapi.com'
	},
	body: new URLSearchParams({
		in: 'What\'s 2 plus 5?',
		op: 'in',
		cbot: '1',
		SessionID: 'RapidAPI1',
		cbid: '1',
		key: 'RHMN5hnQ4wTYZBGCF3dfxzypt68rVP',
		ChatSource: 'RapidAPI',
		duration: '1'
	})
};

try {
	const response = await fetch(url, options);
	const result = await response.text();
	console.log(result);
} catch (error) {
	console.error(error);
}