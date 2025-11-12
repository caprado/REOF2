void func_00145a20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_28;
    
    sp = sp + -0x30;                                            // 0x00145a20: addiu $sp, $sp, -0x30
    a1 = 0xa;                                                   // 0x00145a24: addiu $a1, $zero, 0xa
    func_00145818();  // 0x1456a8                                // 0x00145a34: jal 0x1456a8
    func_00145818();  // 0x1456a8                                // 0x00145a44: jal 0x1456a8
    a1 = 3;                                                     // 0x00145a48: addiu $a1, $zero, 3
    *(uint32_t*)((s0) + 0x168) = v0;                            // 0x00145a4c: sw $v0, 0x168($s0)
    func_00145818();  // 0x1456a8                                // 0x00145a54: jal 0x1456a8
    a1 = 0x10;                                                  // 0x00145a58: addiu $a1, $zero, 0x10
    v1 = *(int32_t*)((s0) + 0x168);                             // 0x00145a5c: lw $v1, 0x168($s0)
    v0 = v1 + -2;                                               // 0x00145a60: addiu $v0, $v1, -2
    v0 = ((unsigned)v0 < (unsigned)2) ? 1 : 0;                  // 0x00145a64: sltiu $v0, $v0, 2
    if (v0 == 0) goto label_0x145a90;                           // 0x00145a68: beqz $v0, 0x145a90
    func_00145818();  // 0x1456a8                                // 0x00145a70: jal 0x1456a8
    a1 = 1;                                                     // 0x00145a74: addiu $a1, $zero, 1
    *(uint32_t*)((s0) + 0x16c) = v0;                            // 0x00145a78: sw $v0, 0x16c($s0)
    func_00145818();  // 0x1456a8                                // 0x00145a80: jal 0x1456a8
    a1 = 3;                                                     // 0x00145a84: addiu $a1, $zero, 3
    *(uint32_t*)((s0) + 0x170) = v0;                            // 0x00145a88: sw $v0, 0x170($s0)
    v1 = *(int32_t*)((s0) + 0x168);                             // 0x00145a8c: lw $v1, 0x168($s0)
label_0x145a90:
    v0 = 3;                                                     // 0x00145a90: addiu $v0, $zero, 3
    if (v1 != v0) goto label_0x145ab8;                          // 0x00145a94: bne $v1, $v0, 0x145ab8
    func_00145818();  // 0x1456a8                                // 0x00145a9c: jal 0x1456a8
    a1 = 1;                                                     // 0x00145aa0: addiu $a1, $zero, 1
    *(uint32_t*)((s0) + 0x174) = v0;                            // 0x00145aa4: sw $v0, 0x174($s0)
    func_00145818();  // 0x1456a8                                // 0x00145aac: jal 0x1456a8
    a1 = 3;                                                     // 0x00145ab0: addiu $a1, $zero, 3
    *(uint32_t*)((s0) + 0x178) = v0;                            // 0x00145ab4: sw $v0, 0x178($s0)
label_0x145ab8:
    func_00145ec0();  // 0x145e00                                // 0x00145ab8: jal 0x145e00
    func_00145c10();  // 0x145ae8                                // 0x00145ac0: jal 0x145ae8
    return func_00145e48();  // Tail call                       // 0x00145adc: j 0x145e48
    sp = sp + 0x30;                                             // 0x00145ae0: addiu $sp, $sp, 0x30
    /* nop */                                                   // 0x00145ae4: nop 
    sp = sp + -0x80;                                            // 0x00145ae8: addiu $sp, $sp, -0x80
    v0 = 0x22 << 16;                                            // 0x00145aec: lui $v0, 0x22
    s3 = 0x1b2;                                                 // 0x00145b04: addiu $s3, $zero, 0x1b2
    s1 = 0x1b5;                                                 // 0x00145b0c: addiu $s1, $zero, 0x1b5
    a3 = v0 + 0x6778;                                           // 0x00145b10: addiu $a3, $v0, 0x6778
    a2 = g_002267a0;  // Global at 0x002267a0                   // 0x00145b54: lw $a2, 0x28($a3)
    local_28 = a2;                                              // 0x00145b68: sw $a2, 0x28($sp)
    func_00145898();  // 0x145818                                // 0x00145b6c: jal 0x145818
    s2 = 0xa;                                                   // 0x00145b70: addiu $s2, $zero, 0xa
    goto label_0x145bdc;                                        // 0x00145b74: b 0x145bdc
    /* nop */                                                   // 0x00145b7c: nop 
label_0x145b80:
    if (v0 != s1) goto label_0x145bc8;                          // 0x00145b80: bnel $v0, $s1, 0x145bc8
label_0x145b88:
    func_001456a8();  // 0x145598                                // 0x00145b88: jal 0x145598
    /* nop */                                                   // 0x00145b8c: nop 
    func_00145818();  // 0x1456a8                                // 0x00145b94: jal 0x1456a8
    a1 = 4;                                                     // 0x00145b98: addiu $a1, $zero, 4
    v1 = ((unsigned)s2 < (unsigned)v0) ? 1 : 0;                 // 0x00145b9c: sltu $v1, $s2, $v0
    if (v1 != 0) v0 = 0;                                        // 0x00145ba0: movn $v0, $zero, $v1
    v0 = v0 << 2;                                               // 0x00145ba4: sll $v0, $v0, 2
    v1 = sp + v0;                                               // 0x00145ba8: addu $v1, $sp, $v0
    v0 = *(int32_t*)(v1);                                       // 0x00145bac: lw $v0, 0($v1)
    /* call function at address in v0 */                        // 0x00145bb0: jalr $v0
    func_00145898();  // 0x145818                                // 0x00145bb8: jal 0x145818
    goto label_0x145bdc;                                        // 0x00145bc0: b 0x145bdc
label_0x145bc8:
    func_001456a8();  // 0x145598                                // 0x00145bc8: jal 0x145598
    a1 = 0x20;                                                  // 0x00145bcc: addiu $a1, $zero, 0x20
    func_00145898();  // 0x145818                                // 0x00145bd0: jal 0x145818
label_0x145bdc:
    func_00145598();  // 0x145478                                // 0x00145bdc: jal 0x145478
    a1 = 0x20;                                                  // 0x00145be0: addiu $a1, $zero, 0x20
    if (v0 == s1) goto label_0x145b88;                          // 0x00145be8: beq $v0, $s1, 0x145b88
    a1 = 0x20;                                                  // 0x00145bec: addiu $a1, $zero, 0x20
    if (v0 == s3) goto label_0x145b80;                          // 0x00145bf0: beq $v0, $s3, 0x145b80
    return;                                                     // 0x00145c08: jr $ra
    sp = sp + 0x80;                                             // 0x00145c0c: addiu $sp, $sp, 0x80
}