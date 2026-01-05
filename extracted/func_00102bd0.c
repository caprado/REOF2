void func_00102bd0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00102bd0: addiu $sp, $sp, -0x10
    func_00102c40();  // 102c40                                // 0x00102bd8: jal 0x102c40
    /* nop */                                                   // 0x00102bdc: nop 
    v1 = 1;                                                     // 0x00102be0: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x102c00;                          // 0x00102be4: bne $v0, $v1, 0x102c00
    v1 = 0x1000 << 16;                                          // 0x00102bec: lui $v1, 0x1000
    a0 = 8;                                                     // 0x00102bf0: addiu $a0, $zero, 8
    v1 = v1 | 0x3c10;                                           // 0x00102bf4: ori $v1, $v1, 0x3c10
    v0 = 1;                                                     // 0x00102bf8: addiu $v0, $zero, 1
    g_10000000 = a0;  // Global at 0x10000000                   // 0x00102bfc: sw $a0, 0($v1)
label_0x102c00:
    return;                                                     // 0x00102c04: jr $ra
    sp = sp + 0x10;                                             // 0x00102c08: addiu $sp, $sp, 0x10
}