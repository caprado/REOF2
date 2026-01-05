void func_00177b18() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00177b18: addiu $sp, $sp, -0x20
    v0 = *(int32_t*)((s0) + 0xc);                               // 0x00177b2c: lw $v0, 0xc($s0)
    if (v0 != 0) goto label_0x177b5c;                           // 0x00177b30: bnez $v0, 0x177b5c
    func_0010f748();  // 10f748                                // 0x00177b3c: jal 0x10f748
    func_0010f7c0();  // 10f7c0                                // 0x00177b48: jal 0x10f7c0
label_0x177b5c:
    return;                                                     // 0x00177b68: jr $ra
    sp = sp + 0x20;                                             // 0x00177b6c: addiu $sp, $sp, 0x20
}