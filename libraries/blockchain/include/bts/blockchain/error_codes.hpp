#pragma once

#include <fc/reflect/reflect.hpp>

namespace bts { namespace blockchain {

enum bts_error_code
{
   BTS_UNDEFINED_ADDRESS,
   BTS_INSUFFICIENT_FUNDS,
   BTS_MISSING_SIGNATURE,
   BTS_INVALID_WITHDRAW_CONDITION,
   BTS_UNKNOWN_ADDRESS,
   BTS_NAME_ALREADY_REGISTERED,
   BTS_ASSET_ALREADY_REGISTERED,
   BTS_INVALID_ACCOUNT_ID,
   BTS_INVALID_ASSET_ID,
   BTS_INVALID_DELEGATE_ID,
   BTS_INSUFFICIENT_FEE_PAID,
   BTS_DELEGATE_MAX_VOTE_LIMIT,
   BTS_DUPLICATE_TRANSACTION,
   BTS_NAME_RETRACTED,
   BTS_NEGATIVE_WITHDRAW,
   BTS_NEGATIVE_DEPOSIT,
   BTS_NEGATIVE_ISSUE,
   BTS_INVALID_PASSWORD
};

} } // bts::blockchain

FC_REFLECT_ENUM( bts::blockchain::bts_error_code,
                 (BTS_UNDEFINED_ADDRESS)
                 (BTS_INSUFFICIENT_FUNDS)
                 (BTS_MISSING_SIGNATURE)
                 (BTS_INVALID_WITHDRAW_CONDITION)
                 (BTS_UNKNOWN_ADDRESS)
                 (BTS_NAME_ALREADY_REGISTERED)
                 (BTS_ASSET_ALREADY_REGISTERED)
                 (BTS_INVALID_ACCOUNT_ID)
                 (BTS_INVALID_ASSET_ID)
                 (BTS_INVALID_DELEGATE_ID)
                 (BTS_INSUFFICIENT_FEE_PAID)
                 (BTS_DELEGATE_MAX_VOTE_LIMIT)
                 (BTS_DUPLICATE_TRANSACTION)
                 (BTS_NAME_RETRACTED)
                 (BTS_NEGATIVE_WITHDRAW)
                 (BTS_NEGATIVE_DEPOSIT)
                 (BTS_NEGATIVE_ISSUE)
                 (BTS_INVALID_PASSWORD) )
