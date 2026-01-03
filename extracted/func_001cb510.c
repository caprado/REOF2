void func_001cb510() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001cb510: addiu $sp, $sp, -0x30
    v0 = a1 & 0xff;                                             // 0x001cb514: andi $v0, $a1, 0xff
    v0 = v0 & 0x80;                                             // 0x001cb51c: andi $v0, $v0, 0x80
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001cb520: addu.qb $zero, $sp, $s1
    if (v0 == 0) goto label_0x1cb538;                           // 0x001cb528: beqz $v0, 0x1cb538
    goto label_0x1cb53c;                                        // 0x001cb530: b 0x1cb53c
    s0 = a0 + 0x18;                                             // 0x001cb534: addiu $s0, $a0, 0x18
label_0x1cb538:
    s0 = a0 + 8;                                                // 0x001cb538: addiu $s0, $a0, 8
label_0x1cb53c:
    v0 = *(uint8_t*)((s0) + 8);                                 // 0x001cb53c: lbu $v0, 8($s0)
    if (v0 != 0) goto label_0x1cb550;                           // 0x001cb540: bnez $v0, 0x1cb550
    goto label_0x1cb5ac;                                        // 0x001cb548: b 0x1cb5ac
label_0x1cb550:
    v0 = *(uint8_t*)((s0) + 0xb);                               // 0x001cb550: lbu $v0, 0xb($s0)
    if (v0 == 0) goto label_0x1cb568;                           // 0x001cb554: beqz $v0, 0x1cb568
    func_001cb5c0();  // 1cb5c0                                // 0x001cb55c: jal 0x1cb5c0
    /* nop */                                                   // 0x001cb560: nop 
    *(uint8_t*)((s0) + 0xb) = 0;                                // 0x001cb564: sb $zero, 0xb($s0)
label_0x1cb568:
    a0 = *(int32_t*)(s0);                                       // 0x001cb568: lw $a0, 0($s0)
    v0 = *(int32_t*)((a0) + 8);                                 // 0x001cb56c: lw $v0, 8($a0)
    at = ((unsigned)s1 < (unsigned)v0) ? 1 : 0;                 // 0x001cb570: sltu $at, $s1, $v0
    if (at != 0) goto label_0x1cb5a8;                           // 0x001cb574: bnez $at, 0x1cb5a8
    v1 = *(int32_t*)((a0) + 4);                                 // 0x001cb57c: lw $v1, 4($a0)
    v0 = a0 + 8;                                                // 0x001cb580: addiu $v0, $a0, 8
    *(uint32_t*)(s0) = v1;                                      // 0x001cb584: sw $v1, 0($s0)
    *(uint32_t*)(a0) = 0;                                       // 0x001cb588: sw $zero, 0($a0)
    *(uint32_t*)((a0) + 4) = 0;                                 // 0x001cb58c: sw $zero, 4($a0)
    v1 = *(uint8_t*)((a0) + 0xf);                               // 0x001cb590: lbu $v1, 0xf($a0)
    v1 = v1 & 0xdf;                                             // 0x001cb594: andi $v1, $v1, 0xdf
    *(uint8_t*)((a0) + 0xf) = v1;                               // 0x001cb598: sb $v1, 0xf($a0)
    v1 = *(uint8_t*)((s0) + 8);                                 // 0x001cb59c: lbu $v1, 8($s0)
    v1 = v1 + -1;                                               // 0x001cb5a0: addiu $v1, $v1, -1
    *(uint8_t*)((s0) + 8) = v1;                                 // 0x001cb5a4: sb $v1, 8($s0)
label_0x1cb5a8:
label_0x1cb5ac:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001cb5ac: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001cb5b0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001cb5b4: jr $ra
    sp = sp + 0x30;                                             // 0x001cb5b8: addiu $sp, $sp, 0x30
}