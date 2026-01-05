void func_0016cc18() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_10;
    
    sp = sp + -0x60;                                            // 0x0016cc18: addiu $sp, $sp, -0x60
    s4 = s0 + 0x94c;                                            // 0x0016cc38: addiu $s4, $s0, 0x94c
    v0 = s0 + 0x1b28;                                           // 0x0016cc48: addiu $v0, $s0, 0x1b28
    *(uint32_t*)(s5) = 0;                                       // 0x0016cc54: sw $zero, 0($s5)
    s2 = *(int32_t*)((v0) + 0x10);                              // 0x0016cc58: lw $s2, 0x10($v0)
    s3 = *(int32_t*)((v0) + 8);                                 // 0x0016cc5c: lw $s3, 8($v0)
    func_00171cd8();  // 171cd8                                // 0x0016cc60: jal 0x171cd8
    *(uint32_t*)((s4) + 0x20) = 0;                              // 0x0016cc64: sw $zero, 0x20($s4)
    /* bnezl $v0, 0x16cca8 */                                   // 0x0016cc68: bnezl $v0, 0x16cca8
    v0 = *(int32_t*)((s3) + 0x78);                              // 0x0016cc6c: lw $v0, 0x78($s3)
    func_0016d2f0();  // 16d2f0                                // 0x0016cc70: jal 0x16d2f0
    v1 = 1;                                                     // 0x0016cc78: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x16cc98;                          // 0x0016cc7c: bnel $v0, $v1, 0x16cc98
    *(uint32_t*)((s4) + 0x20) = v1;                             // 0x0016cc80: sw $v1, 0x20($s4)
    func_00170220();  // 170220                                // 0x0016cc84: jal 0x170220
    goto label_0x16ce48;                                        // 0x0016cc8c: b 0x16ce48
    /* nop */                                                   // 0x0016cc94: nop 
label_0x16cc98:
    func_0016c8d0();  // 16c8d0                                // 0x0016cc98: jal 0x16c8d0
    goto label_0x16ce4c;                                        // 0x0016cca0: b 0x16ce4c
    v1 = s1 & 0xcc;                                             // 0x0016ccac: andi $v1, $s1, 0xcc
    v0 = v0 ^ 0xcc;                                             // 0x0016ccb4: xori $v0, $v0, 0xcc
    a2 = sp + 0x10;                                             // 0x0016ccb8: addiu $a2, $sp, 0x10
    func_001672a8();  // 1672a8                                // 0x0016ccbc: jal 0x1672a8
    if (v0 != 0) s1 = v1;                                       // 0x0016ccc0: movn $s1, $v1, $v0
    if (s2 != 0) goto label_0x16ce48;                           // 0x0016ccc8: bnez $s2, 0x16ce48
    v0 = s1 & 0xc8;                                             // 0x0016ccd0: andi $v0, $s1, 0xc8
    if (v0 == 0) goto label_0x16cce4;                           // 0x0016ccd4: beqz $v0, 0x16cce4
    func_00170240();  // 170240                                // 0x0016ccdc: jal 0x170240
    a1 = 1;                                                     // 0x0016cce0: addiu $a1, $zero, 1
label_0x16cce4:
    v0 = 0x80;                                                  // 0x0016cce4: addiu $v0, $zero, 0x80
    if (s1 != v0) goto label_0x16cd44;                          // 0x0016cce8: bnel $s1, $v0, 0x16cd44
    func_0016cec0();  // 16cec0                                // 0x0016ccf0: jal 0x16cec0
    func_00167a90();  // 167a90                                // 0x0016ccf8: jal 0x167a90
    if (v0 == 0) goto label_0x16cd20;                           // 0x0016cd00: beqz $v0, 0x16cd20
    a1 = local_10;                                              // 0x0016cd04: lw $a1, 0x10($sp)
    func_0016cf70();  // 16cf70                                // 0x0016cd08: jal 0x16cf70
    /* bnezl $v0, 0x16ce48 */                                   // 0x0016cd10: bnezl $v0, 0x16ce48
    goto label_0x16ce40;                                        // 0x0016cd18: b 0x16ce40
    v0 = 1;                                                     // 0x0016cd1c: addiu $v0, $zero, 1
label_0x16cd20:
    func_00167af8();  // 167af8                                // 0x0016cd20: jal 0x167af8
    if (v0 == 0) goto label_0x16cd40;                           // 0x0016cd28: beqz $v0, 0x16cd40
    a1 = local_10;                                              // 0x0016cd2c: lw $a1, 0x10($sp)
    func_0016d1c8();  // 16d1c8                                // 0x0016cd30: jal 0x16d1c8
    goto label_0x16ce40;                                        // 0x0016cd38: b 0x16ce40
    v0 = 1;                                                     // 0x0016cd3c: addiu $v0, $zero, 1
label_0x16cd40:
label_0x16cd44:
    func_0016d2a8();  // 16d2a8                                // 0x0016cd48: jal 0x16d2a8
    /* beqzl $v0, 0x16cd68 */                                   // 0x0016cd50: beqzl $v0, 0x16cd68
    v0 = (s6 < 5) ? 1 : 0;                                      // 0x0016cd54: slti $v0, $s6, 5
    func_00170220();  // 170220                                // 0x0016cd58: jal 0x170220
    goto label_0x16ce48;                                        // 0x0016cd60: b 0x16ce48
    if (v0 == 0) goto label_0x16cd80;                           // 0x0016cd68: beqz $v0, 0x16cd80
    v0 = s1 & 0x4c;                                             // 0x0016cd6c: andi $v0, $s1, 0x4c
    v0 = 1;                                                     // 0x0016cd70: addiu $v0, $zero, 1
    goto label_0x16ce44;                                        // 0x0016cd74: b 0x16ce44
    *(uint32_t*)((s4) + 0x20) = v0;                             // 0x0016cd78: sw $v0, 0x20($s4)
    /* nop */                                                   // 0x0016cd7c: nop 
label_0x16cd80:
    if (v0 == 0) goto label_0x16cdd0;                           // 0x0016cd80: beqz $v0, 0x16cdd0
    func_0016ce70();  // 16ce70                                // 0x0016cd88: jal 0x16ce70
    a3 = *(int32_t*)((s3) + 0x78);                              // 0x0016cd90: lw $a3, 0x78($s3)
    a2 = local_10;                                              // 0x0016cd94: lw $a2, 0x10($sp)
    a3 = s1 & a3;                                               // 0x0016cd9c: and $a3, $s1, $a3
    func_0016d3a8();  // 16d3a8                                // 0x0016cda4: jal 0x16d3a8
    a3 = ((unsigned)0 < (unsigned)a3) ? 1 : 0;                  // 0x0016cda8: sltu $a3, $zero, $a3
    if (s2 != 0) goto label_0x16ce4c;                           // 0x0016cdb0: bnez $s2, 0x16ce4c
    v0 = *(int32_t*)((s3) + 0x78);                              // 0x0016cdb8: lw $v0, 0x78($s3)
    v0 = s1 & v0;                                               // 0x0016cdbc: and $v0, $s1, $v0
    if (v0 == 0) goto label_0x16ce3c;                           // 0x0016cdc0: beqz $v0, 0x16ce3c
    v0 = 0xcc;                                                  // 0x0016cdc4: addiu $v0, $zero, 0xcc
    goto label_0x16ce3c;                                        // 0x0016cdc8: b 0x16ce3c
    *(uint32_t*)((s3) + 0x78) = v0;                             // 0x0016cdcc: sw $v0, 0x78($s3)
label_0x16cdd0:
    v0 = s1 & 2;                                                // 0x0016cdd0: andi $v0, $s1, 2
    /* beqzl $v0, 0x16ce28 */                                   // 0x0016cdd4: beqzl $v0, 0x16ce28
    v0 = 0x80;                                                  // 0x0016cdd8: addiu $v0, $zero, 0x80
    func_0016e328();  // 16e328                                // 0x0016cddc: jal 0x16e328
    if (v0 == 0) goto label_0x16ce48;                           // 0x0016cde4: beqz $v0, 0x16ce48
    func_0016e338();  // 16e338                                // 0x0016cdec: jal 0x16e338
    if (v0 == 0) goto label_0x16ce18;                           // 0x0016cdf4: beqz $v0, 0x16ce18
    a1 = local_10;                                              // 0x0016cdf8: lw $a1, 0x10($sp)
    func_0016e808();  // 16e808                                // 0x0016cdfc: jal 0x16e808
    /* bnezl $s2, 0x16ce48 */                                   // 0x0016ce08: bnezl $s2, 0x16ce48
    goto label_0x16ce40;                                        // 0x0016ce10: b 0x16ce40
    v0 = 1;                                                     // 0x0016ce14: addiu $v0, $zero, 1
label_0x16ce18:
    func_0016e950();  // 16e950                                // 0x0016ce18: jal 0x16e950
    goto label_0x16ce44;                                        // 0x0016ce20: b 0x16ce44
    if (s1 == v0) goto label_0x16ce44;                          // 0x0016ce28: beq $s1, $v0, 0x16ce44
    a1 = local_10;                                              // 0x0016ce2c: lw $a1, 0x10($sp)
    func_0016f360();  // 16f360                                // 0x0016ce34: jal 0x16f360
    a2 = 0xcc;                                                  // 0x0016ce38: addiu $a2, $zero, 0xcc
label_0x16ce3c:
    v0 = 1;                                                     // 0x0016ce3c: addiu $v0, $zero, 1
label_0x16ce40:
    *(uint32_t*)(s5) = v0;                                      // 0x0016ce40: sw $v0, 0($s5)
label_0x16ce44:
label_0x16ce48:
label_0x16ce4c:
    return;                                                     // 0x0016ce68: jr $ra
    sp = sp + 0x60;                                             // 0x0016ce6c: addiu $sp, $sp, 0x60
}