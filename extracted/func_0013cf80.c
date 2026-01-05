void func_0013cf80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013cf80: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x13cfa0;                           // 0x0013cf84: bnez $a0, 0x13cfa0
    a0 = 0x22 << 16;                                            // 0x0013cf8c: lui $a0, 0x22
    func_0013d1b8();  // 13d1b8                                // 0x0013cf90: jal 0x13d1b8
    a0 = &str_00225be8;  // "E0011: Illigal parameter fname=%s\n" // 0x0013cf94: addiu $a0, $a0, 0x5be8
    goto label_0x13d008;                                        // 0x0013cf98: b 0x13d008
label_0x13cfa0:
    a2 = a0 + 0x38;                                             // 0x0013cfa0: addiu $a2, $a0, 0x38
    v0 = g_00225c20;  // Global at 0x00225c20                   // 0x0013cfa4: lw $v0, 0($a2)
    if (v0 == a1) goto label_0x13cfdc;                          // 0x0013cfa8: beq $v0, $a1, 0x13cfdc
    v1 = v1 + 1;                                                // 0x0013cfb0: addiu $v1, $v1, 1
    /* nop */                                                   // 0x0013cfb4: nop 
label_0x13cfb8:
    v0 = (v1 < 0x10) ? 1 : 0;                                   // 0x0013cfb8: slti $v0, $v1, 0x10
    if (v0 == 0) goto label_0x13cfdc;                           // 0x0013cfbc: beqz $v0, 0x13cfdc
    a2 = a2 + 0x20;                                             // 0x0013cfc0: addiu $a2, $a2, 0x20
    v0 = g_00225c40;  // Global at 0x00225c40                   // 0x0013cfc4: lw $v0, 0($a2)
    /* nop */                                                   // 0x0013cfc8: nop 
    /* nop */                                                   // 0x0013cfcc: nop 
    /* nop */                                                   // 0x0013cfd0: nop 
    if (v0 != a1) goto label_0x13cfb8;                          // 0x0013cfd4: bnel $v0, $a1, 0x13cfb8
    v1 = v1 + 1;                                                // 0x0013cfd8: addiu $v1, $v1, 1
label_0x13cfdc:
    v0 = 0x10;                                                  // 0x0013cfdc: addiu $v0, $zero, 0x10
    if (v1 != v0) goto label_0x13d000;                          // 0x0013cfe0: bnel $v1, $v0, 0x13d000
    v1 = v1 << 5;                                               // 0x0013cfe4: sll $v1, $v1, 5
    a0 = 0x22 << 16;                                            // 0x0013cfe8: lui $a0, 0x22
    func_0013d1b8();  // 13d1b8                                // 0x0013cfec: jal 0x13d1b8
    a0 = &str_00225c58;  // "E0010: Illigal parameter min=%d\n" // 0x0013cff0: addiu $a0, $a0, 0x5c58
    goto label_0x13d008;                                        // 0x0013cff4: b 0x13d008
    /* nop */                                                   // 0x0013cffc: nop 
label_0x13d000:
    v1 = v1 + a0;                                               // 0x0013d000: addu $v1, $v1, $a0
    v0 = *(int32_t*)((v1) + 0x54);                              // 0x0013d004: lw $v0, 0x54($v1)
label_0x13d008:
    return;                                                     // 0x0013d00c: jr $ra
    sp = sp + 0x10;                                             // 0x0013d010: addiu $sp, $sp, 0x10
}