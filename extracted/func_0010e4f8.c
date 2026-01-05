void func_0010e4f8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_4;
    
    sp = sp + -0x60;                                            // 0x0010e4f8: addiu $sp, $sp, -0x60
    v0 = 0x66;                                                  // 0x0010e4fc: addiu $v0, $zero, 0x66
    s4 = 3;                                                     // 0x0010e524: addiu $s4, $zero, 3
    if (s1 == v0) goto label_0x10e56c;                          // 0x0010e548: beq $s1, $v0, 0x10e56c
    v0 = 0x65;                                                  // 0x0010e550: addiu $v0, $zero, 0x65
    if (s1 == v0) goto label_0x10e564;                          // 0x0010e554: beq $s1, $v0, 0x10e564
    v0 = 0x45;                                                  // 0x0010e558: addiu $v0, $zero, 0x45
    if (s1 != v0) goto label_0x10e56c;                          // 0x0010e55c: bne $s1, $v0, 0x10e56c
    s4 = 2;                                                     // 0x0010e560: addiu $s4, $zero, 2
label_0x10e564:
    s3 = s3 + 1;                                                // 0x0010e564: addiu $s3, $s3, 1
    s4 = 2;                                                     // 0x0010e568: addiu $s4, $zero, 2
label_0x10e56c:
    if (v0 >= 0) goto label_0x10e598;                           // 0x0010e574: bgezl $v0, 0x10e598
    *(uint8_t*)(s0) = 0;                                        // 0x0010e578: sb $zero, 0($s0)
    func_001119f0();  // 1119f0                                // 0x0010e584: jal 0x1119f0
    /* nop */                                                   // 0x0010e588: nop 
    v0 = 0x2d;                                                  // 0x0010e590: addiu $v0, $zero, 0x2d
    *(uint8_t*)(s0) = v0;                                       // 0x0010e594: sb $v0, 0($s0)
label_0x10e598:
    func_00103c80();  // 103c80                                // 0x0010e5b0: jal 0x103c80
    t2 = sp + 4;                                                // 0x0010e5b4: addiu $t2, $sp, 4
    v0 = 0x67;                                                  // 0x0010e5bc: addiu $v0, $zero, 0x67
    if (s1 == v0) goto label_0x10e5d0;                          // 0x0010e5c0: beq $s1, $v0, 0x10e5d0
    v0 = 0x47;                                                  // 0x0010e5c4: addiu $v0, $zero, 0x47
    if (s1 != v0) goto label_0x10e5dc;                          // 0x0010e5c8: bne $s1, $v0, 0x10e5dc
    v0 = 0x66;                                                  // 0x0010e5cc: addiu $v0, $zero, 0x66
label_0x10e5d0:
    v0 = s7 & 1;                                                // 0x0010e5d0: andi $v0, $s7, 1
    if (v0 == 0) goto label_0x10e678;                           // 0x0010e5d4: beqz $v0, 0x10e678
    v0 = 0x66;                                                  // 0x0010e5d8: addiu $v0, $zero, 0x66
label_0x10e5dc:
    if (s1 != v0) goto label_0x10e61c;                          // 0x0010e5dc: bne $s1, $v0, 0x10e61c
    s0 = s4 + s3;                                               // 0x0010e5e0: addu $s0, $s4, $s3
    v1 = *(int8_t*)(s4);                                        // 0x0010e5e4: lb $v1, 0($s4)
    v0 = 0x30;                                                  // 0x0010e5e8: addiu $v0, $zero, 0x30
    if (v1 != v0) goto label_0x10e618;                          // 0x0010e5ec: bnel $v1, $v0, 0x10e618
    v0 = *(int32_t*)(s5);                                       // 0x0010e5f0: lw $v0, 0($s5)
    func_00111f40();  // 111f40                                // 0x0010e5fc: jal 0x111f40
    /* nop */                                                   // 0x0010e600: nop 
    if (v0 == 0) goto label_0x10e614;                           // 0x0010e604: beqz $v0, 0x10e614
    v0 = 1;                                                     // 0x0010e608: addiu $v0, $zero, 1
    v0 = v0 - s3;                                               // 0x0010e60c: subu $v0, $v0, $s3
    *(uint32_t*)(s5) = v0;                                      // 0x0010e610: sw $v0, 0($s5)
label_0x10e614:
    v0 = *(int32_t*)(s5);                                       // 0x0010e614: lw $v0, 0($s5)
label_0x10e618:
    s0 = s0 + v0;                                               // 0x0010e618: addu $s0, $s0, $v0
label_0x10e61c:
    func_00111f40();  // 111f40                                // 0x0010e624: jal 0x111f40
    /* nop */                                                   // 0x0010e628: nop 
    v1 = local_4;                                               // 0x0010e62c: lw $v1, 4($sp)
    v0 = v0 ^ 0;                                                // 0x0010e630: xori $v0, $v0, 0
    if (v0 == 0) v1 = s0;                                       // 0x0010e634: movz $v1, $s0, $v0
    v0 = ((unsigned)v1 < (unsigned)s0) ? 1 : 0;                 // 0x0010e638: sltu $v0, $v1, $s0
    local_4 = v1;                                               // 0x0010e63c: sw $v1, 4($sp)
    if (v0 == 0) goto label_0x10e67c;                           // 0x0010e640: beqz $v0, 0x10e67c
    a1 = 0x30;                                                  // 0x0010e648: addiu $a1, $zero, 0x30
    /* nop */                                                   // 0x0010e64c: nop 
label_0x10e650:
    v1 = a0 + 1;                                                // 0x0010e650: addiu $v1, $a0, 1
    *(uint8_t*)(a0) = a1;                                       // 0x0010e654: sb $a1, 0($a0)
    v0 = ((unsigned)v1 < (unsigned)s0) ? 1 : 0;                 // 0x0010e658: sltu $v0, $v1, $s0
    local_4 = v1;                                               // 0x0010e65c: sw $v1, 4($sp)
    /* nop */                                                   // 0x0010e660: nop 
    if (v0 != 0) goto label_0x10e650;                           // 0x0010e664: bnez $v0, 0x10e650
    goto label_0x10e680;                                        // 0x0010e66c: b 0x10e680
    v1 = v1 - s4;                                               // 0x0010e670: subu $v1, $v1, $s4
    /* nop */                                                   // 0x0010e674: nop 
label_0x10e678:
    v1 = local_4;                                               // 0x0010e678: lw $v1, 4($sp)
label_0x10e67c:
    v1 = v1 - s4;                                               // 0x0010e67c: subu $v1, $v1, $s4
label_0x10e680:
    *(uint32_t*)(fp) = v1;                                      // 0x0010e684: sw $v1, 0($fp)
    return;                                                     // 0x0010e6b0: jr $ra
    sp = sp + 0x60;                                             // 0x0010e6b4: addiu $sp, $sp, 0x60
}