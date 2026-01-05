void func_001b8430() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001b8430: addiu $sp, $sp, -0x20
    func_001ae5c0();  // 1ae5c0                                // 0x001b8440: jal 0x1ae5c0
    a0 = 1;                                                     // 0x001b8444: addiu $a0, $zero, 1
    a0 = *(uint8_t*)((s0) + 2);                                 // 0x001b8448: lbu $a0, 2($s0)
    v1 = v0 & 0xffff;                                           // 0x001b844c: andi $v1, $v0, 0xffff
    v1 = v1 & 1;                                                // 0x001b8450: andi $v1, $v1, 1
    if (a0 != 0) goto label_0x1b8480;                           // 0x001b8454: bnez $a0, 0x1b8480
    a1 = v1 + 1;                                                // 0x001b8458: addiu $a1, $v1, 1
    a2 = *(uint8_t*)((s0) + 3);                                 // 0x001b845c: lbu $a2, 3($s0)
    a3 = s0 + 0x38;                                             // 0x001b8460: addiu $a3, $s0, 0x38
    t0 = 1;                                                     // 0x001b8464: addiu $t0, $zero, 1
    func_001b8b40();  // 1b8b40                                // 0x001b8470: jal 0x1b8b40
    a0 = a2 + 4;                                                // 0x001b8474: addiu $a0, $a2, 4
    goto label_0x1b849c;                                        // 0x001b8478: b 0x1b849c
label_0x1b8480:
    v1 = 1;                                                     // 0x001b8480: addiu $v1, $zero, 1
    if (a0 != v1) goto label_0x1b8498;                          // 0x001b8484: bne $a0, $v1, 0x1b8498
    /* nop */                                                   // 0x001b8488: nop 
    func_001b8380();  // 1b8380                                // 0x001b8490: jal 0x1b8380
    a1 = a1 + -1;                                               // 0x001b8494: addiu $a1, $a1, -1
label_0x1b8498:
label_0x1b849c:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b849c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b84a0: jr $ra
    sp = sp + 0x20;                                             // 0x001b84a4: addiu $sp, $sp, 0x20
}