void func_0012de58() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0012de58: addiu $sp, $sp, -0x10
    if (v0 == 0) goto label_0x12de80;                           // 0x0012de60: beqz $v0, 0x12de80
    a2 = 0xc;                                                   // 0x0012de70: addiu $a2, $zero, 0xc
    *(uint8_t*)(v0) = 0;                                        // 0x0012de74: sb $zero, 0($v0)
    return func_00107d30();  // Tail call                        // 0x0012de78: j 0x107c70
    sp = sp + 0x10;                                             // 0x0012de7c: addiu $sp, $sp, 0x10
label_0x12de80:
    return;                                                     // 0x0012de84: jr $ra
    sp = sp + 0x10;                                             // 0x0012de88: addiu $sp, $sp, 0x10
}