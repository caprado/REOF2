void func_00134ce0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00134ce0: addiu $sp, $sp, -0x10
    a2 = 8;                                                     // 0x00134cec: addiu $a2, $zero, 8
    *(uint32_t*)((a0) + 0xc) = 0;                               // 0x00134cf0: sw $zero, 0xc($a0)
    a0 = a0 + 0x28;                                             // 0x00134cf4: addiu $a0, $a0, 0x28
    return func_00107d30();  // Tail call                        // 0x00134cfc: j 0x107c70
    sp = sp + 0x10;                                             // 0x00134d00: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00134d04: nop 
    v0 = *(int32_t*)((a0) + 0xc);                               // 0x00134d08: lw $v0, 0xc($a0)
    v1 = 3;                                                     // 0x00134d0c: addiu $v1, $zero, 3
    if (v0 == v1) goto label_0x134d18;                          // 0x00134d10: beql $v0, $v1, 0x134d18
    *(uint32_t*)((a0) + 0xc) = 0;                               // 0x00134d14: sw $zero, 0xc($a0)
label_0x134d18:
    return;                                                     // 0x00134d18: jr $ra
    /* nop */                                                   // 0x00134d1c: nop 
}