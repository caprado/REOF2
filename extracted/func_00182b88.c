void func_00182b88() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00182b88: addiu $sp, $sp, -0x20
    func_00182a70();  // 182a70                                // 0x00182b94: jal 0x182a70
    v0 = 0x7fff << 16;                                          // 0x00182ba0: lui $v0, 0x7fff
    v0 = v0 | 0xffff;                                           // 0x00182ba4: ori $v0, $v0, 0xffff
    if (v1 != v0) goto label_0x182bbc;                          // 0x00182ba8: bne $v1, $v0, 0x182bbc
    v0 = 0x8101 << 16;                                          // 0x00182bb0: lui $v0, 0x8101
    v0 = v0 | 0x9002;                                           // 0x00182bb4: ori $v0, $v0, 0x9002
    *(uint32_t*)(s0) = v0;                                      // 0x00182bb8: sw $v0, 0($s0)
label_0x182bbc:
    return;                                                     // 0x00182bc4: jr $ra
    sp = sp + 0x20;                                             // 0x00182bc8: addiu $sp, $sp, 0x20
}