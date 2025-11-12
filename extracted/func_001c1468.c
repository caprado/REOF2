void func_001c1468() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x18;                                                  // 0x001c146c: addiu $v0, $zero, 0x18
    v1 = *(uint8_t*)((a1) + 3);                                 // 0x001c1470: lbu $v1, 3($a1)
    v1 = v1 + 1;                                                // 0x001c1474: addiu $v1, $v1, 1
    a0 = v1 & 0xff;                                             // 0x001c1478: andi $a0, $v1, 0xff
    if (a0 != v0) goto label_0x1c1490;                          // 0x001c147c: bne $a0, $v0, 0x1c1490
    *(uint8_t*)((a1) + 3) = v1;                                 // 0x001c1480: sb $v1, 3($a1)
    return func_001c1308();  // Tail call                       // 0x001c1488: j 0x1c1308
    *(uint8_t*)((a1) + 3) = 0;                                  // 0x001c148c: sb $zero, 3($a1)
label_0x1c1490:
    return;                                                     // 0x001c1490: jr $ra
    /* nop */                                                   // 0x001c1494: nop 
}