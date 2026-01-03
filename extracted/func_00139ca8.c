void func_00139ca8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00139ca8: addiu $sp, $sp, -0x10
    if (a1 != 0) goto label_0x139cd0;                           // 0x00139cb0: bnez $a1, 0x139cd0
    a1 = 0x22 << 16;                                            // 0x00139cb8: lui $a1, 0x22
    func_001392b8();  // 1392b8                                // 0x00139cbc: jal 0x1392b8
    a1 = &str_00225468;  // "E0092913:nsct < 0.(dvCiReqRd)"     // 0x00139cc0: addiu $a1, $a1, 0x5468
    goto label_0x139ce8;                                        // 0x00139cc4: b 0x139ce8
    /* nop */                                                   // 0x00139ccc: nop 
label_0x139cd0:
    v1 = g_0022546a;  // Global at 0x0022546a                   // 0x00139cd0: lb $v1, 2($a1)
    v0 = 1;                                                     // 0x00139cd4: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x139ce8;                          // 0x00139cd8: bnel $v1, $v0, 0x139ce8
    v0 = g_0022547c;  // Global at 0x0022547c                   // 0x00139ce0: lw $v0, 0x14($a1)
    v0 = v0 << 0xb;                                             // 0x00139ce4: sll $v0, $v0, 0xb
label_0x139ce8:
    return;                                                     // 0x00139cec: jr $ra
    sp = sp + 0x10;                                             // 0x00139cf0: addiu $sp, $sp, 0x10
}