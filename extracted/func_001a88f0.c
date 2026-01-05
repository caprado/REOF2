void func_001a88f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a88f0: addiu $sp, $sp, -0x10
    func_0015e6c0();  // 15e6c0                                // 0x001a88f8: jal 0x15e6c0
    /* nop */                                                   // 0x001a88fc: nop 
    v1 = *(int32_t*)((gp) + -0x63f4);                           // 0x001a8900: lw $v1, -0x63f4($gp)
    if (v1 == 0) goto label_0x1a8918;                           // 0x001a8904: beqz $v1, 0x1a8918
    /* nop */                                                   // 0x001a8908: nop 
    func_0012b4c0();  // 12b4c0                                // 0x001a890c: jal 0x12b4c0
    /* nop */                                                   // 0x001a8910: nop 
    *(uint32_t*)((gp) + -0x63f4) = 0;                           // 0x001a8914: sw $zero, -0x63f4($gp)
label_0x1a8918:
    return;                                                     // 0x001a891c: jr $ra
    sp = sp + 0x10;                                             // 0x001a8920: addiu $sp, $sp, 0x10
}