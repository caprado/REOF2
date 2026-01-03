void func_00102b68() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00102b68: addiu $sp, $sp, -0x20
    func_00102c40();  // 102c40                                // 0x00102b74: jal 0x102c40
    if (v0 == 0) goto label_0x102b8c;                           // 0x00102b7c: beqz $v0, 0x102b8c
    v1 = 1;                                                     // 0x00102b80: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x102b94;                          // 0x00102b84: bne $v0, $v1, 0x102b94
    /* nop */                                                   // 0x00102b88: nop 
label_0x102b8c:
    goto label_0x102bc0;                                        // 0x00102b8c: b 0x102bc0
label_0x102b94:
    if (s0 != 0) goto label_0x102ba4;                           // 0x00102b94: bnez $s0, 0x102ba4
    v0 = 0x1000 << 16;                                          // 0x00102b98: lui $v0, 0x1000
    goto label_0x102bb4;                                        // 0x00102b9c: b 0x102bb4
    v1 = 2;                                                     // 0x00102ba0: addiu $v1, $zero, 2
label_0x102ba4:
    if (s0 != v1) goto label_0x102bc0;                          // 0x00102ba4: bne $s0, $v1, 0x102bc0
    v0 = 1;                                                     // 0x00102ba8: addiu $v0, $zero, 1
    v0 = 0x1000 << 16;                                          // 0x00102bac: lui $v0, 0x1000
    v1 = 4;                                                     // 0x00102bb0: addiu $v1, $zero, 4
label_0x102bb4:
    v0 = v0 | 0x3c10;                                           // 0x00102bb4: ori $v0, $v0, 0x3c10
    g_10000000 = v1;  // Global at 0x10000000                   // 0x00102bb8: sw $v1, 0($v0)
    v0 = 1;                                                     // 0x00102bbc: addiu $v0, $zero, 1
label_0x102bc0:
    return;                                                     // 0x00102bc8: jr $ra
    sp = sp + 0x20;                                             // 0x00102bcc: addiu $sp, $sp, 0x20
}