void func_0013ce50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013ce50: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x13ce70;                           // 0x0013ce54: bnez $a0, 0x13ce70
    a0 = 0x22 << 16;                                            // 0x0013ce5c: lui $a0, 0x22
    func_0013d248();  // 0x13d1b8                                // 0x0013ce60: jal 0x13d1b8
    a0 = &str_00225be8;  // "E0011: Illigal parameter fname=%s\n" // 0x0013ce64: addiu $a0, $a0, 0x5be8
    goto label_0x13ced8;                                        // 0x0013ce68: b 0x13ced8
label_0x13ce70:
    a2 = a0 + 0x38;                                             // 0x0013ce70: addiu $a2, $a0, 0x38
    v0 = g_00225c20;  // Global at 0x00225c20                   // 0x0013ce74: lw $v0, 0($a2)
    if (v0 == a1) goto label_0x13ceac;                          // 0x0013ce78: beq $v0, $a1, 0x13ceac
    v1 = v1 + 1;                                                // 0x0013ce80: addiu $v1, $v1, 1
    /* nop */                                                   // 0x0013ce84: nop 
label_0x13ce88:
    v0 = (v1 < 0x10) ? 1 : 0;                                   // 0x0013ce88: slti $v0, $v1, 0x10
    if (v0 == 0) goto label_0x13ceac;                           // 0x0013ce8c: beqz $v0, 0x13ceac
    a2 = a2 + 0x20;                                             // 0x0013ce90: addiu $a2, $a2, 0x20
    v0 = g_00225c40;  // Global at 0x00225c40                   // 0x0013ce94: lw $v0, 0($a2)
    /* nop */                                                   // 0x0013ce98: nop 
    /* nop */                                                   // 0x0013ce9c: nop 
    /* nop */                                                   // 0x0013cea0: nop 
    if (v0 != a1) goto label_0x13ce88;                          // 0x0013cea4: bnel $v0, $a1, 0x13ce88
    v1 = v1 + 1;                                                // 0x0013cea8: addiu $v1, $v1, 1
label_0x13ceac:
    v0 = 0x10;                                                  // 0x0013ceac: addiu $v0, $zero, 0x10
    if (v1 != v0) goto label_0x13ced0;                          // 0x0013ceb0: bnel $v1, $v0, 0x13ced0
    v1 = v1 << 5;                                               // 0x0013ceb4: sll $v1, $v1, 5
    a0 = 0x22 << 16;                                            // 0x0013ceb8: lui $a0, 0x22
    func_0013d248();  // 0x13d1b8                                // 0x0013cebc: jal 0x13d1b8
    a0 = &str_00225c58;  // "E0010: Illigal parameter min=%d\n" // 0x0013cec0: addiu $a0, $a0, 0x5c58
    goto label_0x13ced8;                                        // 0x0013cec4: b 0x13ced8
    /* nop */                                                   // 0x0013cecc: nop 
label_0x13ced0:
    v1 = v1 + a0;                                               // 0x0013ced0: addu $v1, $v1, $a0
    v0 = *(int32_t*)((v1) + 0x3c);                              // 0x0013ced4: lw $v0, 0x3c($v1)
label_0x13ced8:
    return;                                                     // 0x0013cedc: jr $ra
    sp = sp + 0x10;                                             // 0x0013cee0: addiu $sp, $sp, 0x10
}