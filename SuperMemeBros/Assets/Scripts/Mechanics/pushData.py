from deta import Deta
import deta
from datetime import date

deta = Deta("b0tybjyp_3FcFhpYxLyEGYaJ3PXW41dmjQujbXAyZ")
db = deta.Base("scores")

def uploadScores(score=0, playername="test"):

    today = date.today()
    d = today.strftime("%m/%d/%y")
    db.put({"Score": score, "Playername": playername, "Date":d})
