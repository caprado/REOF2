void func_00163ae0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00163ae0: addiu $sp, $sp, -0x20
    func_0012b2e0();  // 0x12b2d0                                // 0x00163af8: jal 0x12b2d0
    v0 = 1;                                                     // 0x00163b04: addiu $v0, $zero, 1
    if (s0 != v0) goto label_0x163b30;                          // 0x00163b08: bnel $s0, $v0, 0x163b30
    func_00163b68();  // 0x163b48                                // 0x00163b10: jal 0x163b48
    /* nop */                                                   // 0x00163b14: nop 
    if (v0 == s0) goto label_0x163b2c;                          // 0x00163b18: beq $v0, $s0, 0x163b2c
    func_00163d98();  // 0x163cf8                                // 0x00163b20: jal 0x163cf8
    /* nop */                                                   // 0x00163b24: nop 
label_0x163b2c:
label_0x163b30:
    return;                                                     // 0x00163b40: jr $ra
    sp = sp + 0x20;                                             // 0x00163b44: addiu $sp, $sp, 0x20
}