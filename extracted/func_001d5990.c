void func_001d5990() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001d5990: addiu $sp, $sp, -0x20
    a0 = a1 & 0xff;                                             // 0x001d59a0: andi $a0, $a1, 0xff
    func_001d5b70();  // 0x1d5b00                                // 0x001d59a4: jal 0x1d5b00
    a1 = a2 & 0xffff;                                           // 0x001d59a8: andi $a1, $a2, 0xffff
    if (a0 == 0) goto label_0x1d5a48;                           // 0x001d59b0: beqz $a0, 0x1d5a48
    v1 = 1;                                                     // 0x001d59b4: addiu $v1, $zero, 1
    if (s0 != v1) goto label_0x1d59fc;                          // 0x001d59b8: bne $s0, $v1, 0x1d59fc
    /* nop */                                                   // 0x001d59bc: nop 
    a1 = *(uint8_t*)((a0) + 3);                                 // 0x001d59c0: lbu $a1, 3($a0)
    v1 = a1 & 2;                                                // 0x001d59c4: andi $v1, $a1, 2
    if (v1 != 0) goto label_0x1d59d8;                           // 0x001d59c8: bnez $v1, 0x1d59d8
    v1 = a1 & 4;                                                // 0x001d59cc: andi $v1, $a1, 4
    if (v1 == 0) goto label_0x1d59fc;                           // 0x001d59d0: beqz $v1, 0x1d59fc
    /* nop */                                                   // 0x001d59d4: nop 
label_0x1d59d8:
    a2 = *(uint8_t*)(a0);                                       // 0x001d59d8: lbu $a2, 0($a0)
    v1 = ~s0;                                                   // 0x001d59dc: not $v1, $s0
    a1 = v1 & 0xff;                                             // 0x001d59e0: andi $a1, $v1, 0xff
    v1 = a2 + -1;                                               // 0x001d59e4: addiu $v1, $a2, -1
    *(uint8_t*)(a0) = v1;                                       // 0x001d59e8: sb $v1, 0($a0)
    v1 = *(uint8_t*)((a0) + 3);                                 // 0x001d59ec: lbu $v1, 3($a0)
    v1 = v1 & a1;                                               // 0x001d59f0: and $v1, $v1, $a1
    goto label_0x1d5a48;                                        // 0x001d59f4: b 0x1d5a48
    *(uint8_t*)((a0) + 3) = v1;                                 // 0x001d59f8: sb $v1, 3($a0)
label_0x1d59fc:
    v1 = 4;                                                     // 0x001d59fc: addiu $v1, $zero, 4
    if (s0 != v1) goto label_0x1d5a3c;                          // 0x001d5a00: bne $s0, $v1, 0x1d5a3c
    /* nop */                                                   // 0x001d5a04: nop 
    v1 = *(uint8_t*)((a0) + 3);                                 // 0x001d5a08: lbu $v1, 3($a0)
    v1 = v1 & 2;                                                // 0x001d5a0c: andi $v1, $v1, 2
    if (v1 == 0) goto label_0x1d5a3c;                           // 0x001d5a10: beqz $v1, 0x1d5a3c
    /* nop */                                                   // 0x001d5a14: nop 
    a2 = *(uint8_t*)(a0);                                       // 0x001d5a18: lbu $a2, 0($a0)
    v1 = ~s0;                                                   // 0x001d5a1c: not $v1, $s0
    a1 = v1 & 0xff;                                             // 0x001d5a20: andi $a1, $v1, 0xff
    v1 = a2 + -1;                                               // 0x001d5a24: addiu $v1, $a2, -1
    *(uint8_t*)(a0) = v1;                                       // 0x001d5a28: sb $v1, 0($a0)
    v1 = *(uint8_t*)((a0) + 3);                                 // 0x001d5a2c: lbu $v1, 3($a0)
    v1 = v1 & a1;                                               // 0x001d5a30: and $v1, $v1, $a1
    goto label_0x1d5a48;                                        // 0x001d5a34: b 0x1d5a48
    *(uint8_t*)((a0) + 3) = v1;                                 // 0x001d5a38: sb $v1, 3($a0)
label_0x1d5a3c:
    v0 = 1;                                                     // 0x001d5a3c: addiu $v0, $zero, 1
    func_001d5b00();  // 0x1d5ab0                                // 0x001d5a40: jal 0x1d5ab0
    *(uint8_t*)(a0) = v0;                                       // 0x001d5a44: sb $v0, 0($a0)
label_0x1d5a48:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d5a4c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d5a50: jr $ra
    sp = sp + 0x20;                                             // 0x001d5a54: addiu $sp, $sp, 0x20
}