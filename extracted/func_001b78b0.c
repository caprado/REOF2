void func_001b78b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x31 << 16;                                            // 0x001b78b0: lui $at, 0x31
    v1 = g_003137d8;  // Global at 0x003137d8                   // 0x001b78b8: lbu $v1, 0x37d8($at)
    if (a2 == v1) goto label_0x1b78d8;                          // 0x001b78c0: beq $a2, $v1, 0x1b78d8
    /* nop */                                                   // 0x001b78c4: nop 
    v1 = *(int8_t*)((gp) + -0x7cd4);                            // 0x001b78c8: lb $v1, -0x7cd4($gp)
    if (v1 == a2) goto label_0x1b78d8;                          // 0x001b78cc: beq $v1, $a2, 0x1b78d8
    /* nop */                                                   // 0x001b78d0: nop 
    *(uint8_t*)((gp) + -0x7cd4) = a0;                           // 0x001b78d4: sb $a0, -0x7cd4($gp)
label_0x1b78d8:
    v1 = -1;                                                    // 0x001b78dc: addiu $v1, $zero, -1
    if (a0 == v1) goto label_0x1b7908;                          // 0x001b78e4: beq $a0, $v1, 0x1b7908
    at = 0x31 << 16;                                            // 0x001b78e8: lui $at, 0x31
    v1 = g_003137d9;  // Global at 0x003137d9                   // 0x001b78ec: lbu $v1, 0x37d9($at)
    if (a0 == v1) goto label_0x1b7908;                          // 0x001b78f0: beq $a0, $v1, 0x1b7908
    /* nop */                                                   // 0x001b78f4: nop 
    v1 = *(int8_t*)((gp) + -0x7cd0);                            // 0x001b78f8: lb $v1, -0x7cd0($gp)
    if (v1 == a0) goto label_0x1b7908;                          // 0x001b78fc: beq $v1, $a0, 0x1b7908
    /* nop */                                                   // 0x001b7900: nop 
    *(uint8_t*)((gp) + -0x7cd0) = a1;                           // 0x001b7904: sb $a1, -0x7cd0($gp)
label_0x1b7908:
    return;                                                     // 0x001b7908: jr $ra
    /* nop */                                                   // 0x001b790c: nop 
}