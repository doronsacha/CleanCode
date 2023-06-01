//Bad Code

    StatusType averageHighestPlayerLevelByGroup(int GroupID, int m, double *avgLevel)
    {
        if( GroupID<0 || GroupID>uni.getUniverseSize() || avgLevel== nullptr || m<= 0)
        {
            return INVALID_INPUT;
        }
        if(GroupID != 0 && m > uni.find_team_leader(GroupID)->box->num_of_players_with_lvl_0 + uni.find_team_leader(GroupID)->box->players_in_group.getSize())
        {
            return FAILURE;
        }
        if(GroupID == 0 && m> system_box.num_of_players_with_lvl_0+ system_box.players_in_group.getSize())
        {
            return FAILURE;
        }
        AVL<int> *avl;
        double final;
        if(GroupID==0)
        {
            avl= &(system_box.players_in_group);
            final=system_box.total_level;
        }
        else
        {
            avl= &(uni.find_team_leader(GroupID)->box->players_in_group);
            final=uni.find_team_leader(GroupID)->box->total_level;
        }
        if(avl->getSize() == 0)
        {
            *avgLevel =0;
            return SUCCESS;
        }
        if(avl->getSize()-m<1)
        {
            *avgLevel=((double)(avl->getSum(avl->getSize())))/m;
            return SUCCESS;
        }
        double low_sum= avl->getSum(avl->getSize()-m);
        final-=low_sum;
        *avgLevel=(final/m);
        return SUCCESS;
    }

//Good Code

StatusType validateInputs(int GroupID, int m, double *avgLevel) {
    if(GroupID < 0 || GroupID > uni.getUniverseSize() || avgLevel == nullptr || m <= 0) {
        return INVALID_INPUT;
    }
    return SUCCESS;
}

StatusType checkFailureCondition(int GroupID, int m, TeamLeader* teamLeader) {
    int numOfPlayersWithLvl0 = teamLeader ? teamLeader->box->num_of_players_with_lvl_0 : system_box.num_of_players_with_lvl_0;
    int sizeOfPlayersInGroup = teamLeader ? teamLeader->box->players_in_group.getSize() : system_box.players_in_group.getSize();

    if(m > numOfPlayersWithLvl0 + sizeOfPlayersInGroup) {
        return FAILURE;
    }
    return SUCCESS;
}

StatusType computeAverageLevel(int m, double *avgLevel, AVL<int>* avl, double totalLevel) {
    if(avl->getSize() == 0) {
        *avgLevel = 0;
        return SUCCESS;
    }

    if(avl->getSize() - m < 1) {
        *avgLevel = ((double)(avl->getSum(avl->getSize()))) / m;
        return SUCCESS;
    }

    double lowSum = avl->getSum(avl->getSize() - m);
    totalLevel -= lowSum;
    *avgLevel = (totalLevel / m);

    return SUCCESS;
}

StatusType averageHighestPlayerLevelByGroup(int GroupID, int m, double *avgLevel) {
    StatusType status;

    status = validateInputs(GroupID, m, avgLevel);
    if(status != SUCCESS) return status;

    TeamLeader* teamLeader = nullptr;
    if (GroupID != 0) {
        teamLeader = uni.find_team_leader(GroupID);
    }

    status = checkFailureCondition(GroupID, m, teamLeader);
    if(status != FAILURE) return status;

    AVL<int>* avl = (GroupID == 0) ? &(system_box.players_in_group) : &(teamLeader->box->players_in_group);
    double totalLevel = (GroupID == 0) ? system_box.total_level : teamLeader->box->total_level;

    return computeAverageLevel(m, avgLevel, avl, totalLevel);
}
