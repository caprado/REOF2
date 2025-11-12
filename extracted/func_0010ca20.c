void func_0010ca20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0010ca20: addiu $sp, $sp, -0x10
    v1 = 0x1f << 16;                                            // 0x0010ca24: lui $v1, 0x1f
    a0 = g_001efdf0;  // Global at 0x001efdf0                   // 0x0010ca34: lw $a0, -0x210($v1)
    return func_0010c7f0();  // Tail call                       // 0x0010ca44: j 0x10c7f0
    sp = sp + 0x10;                                             // 0x0010ca48: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0010ca4c: nop 
    v0 = *(int8_t*)(a0);                                        // 0x0010ca50: lb $v0, 0($a0)
    if (v0 == 0) goto label_0x10ca94;                           // 0x0010ca58: beqz $v0, 0x10ca94
    v1 = *(uint8_t*)(a0);                                       // 0x0010ca5c: lbu $v1, 0($a0)
label_0x10ca60:
    v0 = v1 << 0x18;                                            // 0x0010ca60: sll $v0, $v1, 0x18
    v0 = v0 >> 0x18;                                            // 0x0010ca64: sra $v0, $v0, 0x18
    v1 = 0x22 << 16;                                            // 0x0010ca68: lui $v1, 0x22
    v1 = v1 + v0;                                               // 0x0010ca6c: addu $v1, $v1, $v0
    v1 = g_0021ffe9;  // Global at 0x0021ffe9                   // 0x0010ca70: lbu $v1, -0x17($v1)
    v1 = v1 & 2;                                                // 0x0010ca74: andi $v1, $v1, 2
    if (v1 == 0) goto label_0x10ca84;                           // 0x0010ca78: beqz $v1, 0x10ca84
    v0 = v0 + -0x20;                                            // 0x0010ca7c: addiu $v0, $v0, -0x20
    *(uint8_t*)(a1) = v0;                                       // 0x0010ca80: sb $v0, 0($a1)
label_0x10ca84:
    a1 = a1 + 1;                                                // 0x0010ca84: addiu $a1, $a1, 1
    v0 = *(uint8_t*)(a1);                                       // 0x0010ca88: lbu $v0, 0($a1)
    if (v0 != 0) goto label_0x10ca60;                           // 0x0010ca8c: bnez $v0, 0x10ca60
label_0x10ca94:
    return;                                                     // 0x0010ca94: jr $ra
}