void func_00178fa0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = *(int32_t*)(a0);                                       // 0x00178fa0: lw $v0, 0($a0)
    v1 = (v0 < -1) ? 1 : 0;                                     // 0x00178fa4: slti $v1, $v0, -1
    v0 = (v0 < 2) ? 1 : 0;                                      // 0x00178fa8: slti $v0, $v0, 2
    if (v0 == 0) goto label_0x178fc0;                           // 0x00178fac: beqz $v0, 0x178fc0
    v0 = 1;                                                     // 0x00178fb0: addiu $v0, $zero, 1
    if (v1 == 0) goto label_0x178fc0;                           // 0x00178fb4: beqz $v1, 0x178fc0
    v0 = 1;                                                     // 0x00178fbc: addiu $v0, $zero, 1
label_0x178fc0:
    return;                                                     // 0x00178fc0: jr $ra
    /* nop */                                                   // 0x00178fc4: nop 
}