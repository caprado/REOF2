void func_00115ca0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00115ca0: addiu $sp, $sp, -0x10
    v0 = 0xa;                                                   // 0x00115ca4: addiu $v0, $zero, 0xa
    if (a0 != v0) goto label_0x115cc8;                          // 0x00115ca8: bne $a0, $v0, 0x115cc8
    func_00115bb0();  // 115bb0                                // 0x00115cb0: jal 0x115bb0
    a0 = 0xd;                                                   // 0x00115cb4: addiu $a0, $zero, 0xd
    a0 = 0xa;                                                   // 0x00115cbc: addiu $a0, $zero, 0xa
    return func_00115bf0();  // Tail call                        // 0x00115cc0: j 0x115bb0
    sp = sp + 0x10;                                             // 0x00115cc4: addiu $sp, $sp, 0x10
label_0x115cc8:
    return func_00115bf0();  // Tail call                        // 0x00115ccc: j 0x115bb0
    sp = sp + 0x10;                                             // 0x00115cd0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00115cd4: nop 
    v0 = (a2 < -0x35) ? 1 : 0;                                  // 0x00115ce8: slti $v0, $a2, -0x35
    if (v0 == 0) return;  // Branch to 0x115cfc                 // 0x00115cec: beqz $v0, 0x115cfc
    v0 = (a2 < 0xd) ? 1 : 0;                                    // 0x00115cf0: slti $v0, $a2, 0xd
    return;                                                     // 0x00115cf4: jr $ra
}