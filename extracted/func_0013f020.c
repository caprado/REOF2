void func_0013f020() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013f020: addiu $sp, $sp, -0x10
    a2 = 0x21 << 16;                                            // 0x0013f024: lui $a2, 0x21
    v0 = a2 + -0x5260;                                          // 0x0013f028: addiu $v0, $a2, -0x5260
    v1 = v0 + 4;                                                // 0x0013f034: addiu $v1, $v0, 4
    v0 = g_0020ada4;  // Global at 0x0020ada4                   // 0x0013f040: lw $v0, 0($v1)
    if (v0 == 0) goto label_0x13f074;                           // 0x0013f044: beqz $v0, 0x13f074
    a0 = a0 + 1;                                                // 0x0013f04c: addiu $a0, $a0, 1
    v0 = (a0 < 0x20) ? 1 : 0;                                   // 0x0013f050: slti $v0, $a0, 0x20
    if (v0 == 0) goto label_0x13f074;                           // 0x0013f054: beqz $v0, 0x13f074
    v1 = v1 + 0x24;                                             // 0x0013f058: addiu $v1, $v1, 0x24
    v0 = g_0020adc8;  // Global at 0x0020adc8                   // 0x0013f05c: lw $v0, 0($v1)
    /* nop */                                                   // 0x0013f060: nop 
    /* nop */                                                   // 0x0013f064: nop 
    /* nop */                                                   // 0x0013f068: nop 
    /* bnezl $v0, 0x13f050 */                                   // 0x0013f06c: bnezl $v0, 0x13f050
    a0 = a0 + 1;                                                // 0x0013f070: addiu $a0, $a0, 1
label_0x13f074:
    v1 = 0x20;                                                  // 0x0013f074: addiu $v1, $zero, 0x20
    if (a0 == v1) goto label_0x13f0d8;                          // 0x0013f078: beq $a0, $v1, 0x13f0d8
    s0 = a0 << 3;                                               // 0x0013f080: sll $s0, $a0, 3
    v0 = a2 + -0x5260;                                          // 0x0013f084: addiu $v0, $a2, -0x5260
    s0 = s0 + a0;                                               // 0x0013f088: addu $s0, $s0, $a0
    v1 = 0x21 << 16;                                            // 0x0013f08c: lui $v1, 0x21
    s0 = s0 << 2;                                               // 0x0013f090: sll $s0, $s0, 2
    a2 = 0x22 << 16;                                            // 0x0013f094: lui $a2, 0x22
    a1 = 0x14 << 16;                                            // 0x0013f098: lui $a1, 0x14
    s0 = s0 + v0;                                               // 0x0013f09c: addu $s0, $s0, $v0
    v1 = v1 + -0x5298;                                          // 0x0013f0a0: addiu $v1, $v1, -0x5298
    a2 = a2 + 0x6288;                                           // 0x0013f0a4: addiu $a2, $a2, 0x6288
    v0 = 1;                                                     // 0x0013f0a8: addiu $v0, $zero, 1
    a1 = a1 + -0x10a0;                                          // 0x0013f0ac: addiu $a1, $a1, -0x10a0
    *(uint32_t*)((s0) + 4) = v0;                                // 0x0013f0b0: sw $v0, 4($s0)
    *(uint32_t*)(s0) = v1;                                      // 0x0013f0b8: sw $v1, 0($s0)
    *(uint32_t*)((s0) + 0x14) = t0;                             // 0x0013f0bc: sw $t0, 0x14($s0)
    *(uint32_t*)((s0) + 0x18) = a3;                             // 0x0013f0c0: sw $a3, 0x18($s0)
    *(uint32_t*)((s0) + 8) = a2;                                // 0x0013f0c4: sw $a2, 8($s0)
    *(uint32_t*)((s0) + 0x1c) = a1;                             // 0x0013f0c8: sw $a1, 0x1c($s0)
    func_0013f148();  // 0x13f138                                // 0x0013f0cc: jal 0x13f138
    *(uint32_t*)((s0) + 0x20) = s0;                             // 0x0013f0d0: sw $s0, 0x20($s0)
label_0x13f0d8:
    return;                                                     // 0x0013f0e0: jr $ra
    sp = sp + 0x10;                                             // 0x0013f0e4: addiu $sp, $sp, 0x10
}