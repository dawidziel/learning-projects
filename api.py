import requests
url = "http://ron-swanson-quotes.herokuapp.com/v2/quotes/hate"
cytat = requests.request("GET", url)
print(cytat.text)
