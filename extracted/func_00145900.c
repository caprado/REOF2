void func_00145900() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0xa0;                                            // 0x00145900: addiu $sp, $sp, -0xa0
    s6 = 5;                                                     // 0x0014590c: addiu $s6, $zero, 5
    s5 = 0x1b3;                                                 // 0x00145914: addiu $s5, $zero, 0x1b3
    s4 = 0x100;                                                 // 0x0014591c: addiu $s4, $zero, 0x100
    s3 = 0x1b7;                                                 // 0x00145924: addiu $s3, $zero, 0x1b7
    s2 = 0x1b8;                                                 // 0x0014592c: addiu $s2, $zero, 0x1b8
    s1 = -1;                                                    // 0x00145934: addiu $s1, $zero, -1
    v0 = *(int32_t*)((s0) + 0x10a0);                            // 0x00145940: lw $v0, 0x10a0($s0)
    /* nop */                                                   // 0x00145944: nop 
label_0x145948:
    if (v0 != 0) goto label_0x1459f4;                           // 0x00145948: bnez $v0, 0x1459f4
    v0 = -1;                                                    // 0x0014594c: addiu $v0, $zero, -1
    func_00145818();  // 145818                                // 0x00145950: jal 0x145818
    func_001456a8();  // 1456a8                                // 0x0014595c: jal 0x1456a8
    a1 = 0x20;                                                  // 0x00145960: addiu $a1, $zero, 0x20
    if (v1 == s5) goto label_0x1459a0;                          // 0x00145968: beq $v1, $s5, 0x1459a0
    v0 = ((unsigned)v1 < (unsigned)0x1b4) ? 1 : 0;              // 0x0014596c: sltiu $v0, $v1, 0x1b4
    if (v0 == 0) goto label_0x145988;                           // 0x00145970: beqz $v0, 0x145988
    /* nop */                                                   // 0x00145974: nop 
    if (v1 == s4) goto label_0x1459c0;                          // 0x00145978: beq $v1, $s4, 0x1459c0
    /* nop */                                                   // 0x0014597c: nop 
    goto label_0x145948;                                        // 0x00145980: b 0x145948
    v0 = *(int32_t*)((s0) + 0x10a0);                            // 0x00145984: lw $v0, 0x10a0($s0)
label_0x145988:
    if (v1 == s3) goto label_0x1459f4;                          // 0x00145988: beq $v1, $s3, 0x1459f4
    if (v1 == s2) goto label_0x1459b0;                          // 0x00145990: beq $v1, $s2, 0x1459b0
    /* nop */                                                   // 0x00145994: nop 
    goto label_0x145948;                                        // 0x00145998: b 0x145948
    v0 = *(int32_t*)((s0) + 0x10a0);                            // 0x0014599c: lw $v0, 0x10a0($s0)
label_0x1459a0:
    func_001486a8();  // 1486a8                                // 0x001459a0: jal 0x1486a8
    goto label_0x145948;                                        // 0x001459a8: b 0x145948
    v0 = *(int32_t*)((s0) + 0x10a0);                            // 0x001459ac: lw $v0, 0x10a0($s0)
label_0x1459b0:
    func_00145ec0();  // 145ec0                                // 0x001459b0: jal 0x145ec0
    goto label_0x145948;                                        // 0x001459b8: b 0x145948
    v0 = *(int32_t*)((s0) + 0x10a0);                            // 0x001459bc: lw $v0, 0x10a0($s0)
label_0x1459c0:
    func_00145a20();  // 145a20                                // 0x001459c0: jal 0x145a20
    a0 = *(int32_t*)((s0) + 0x870);                             // 0x001459c8: lw $a0, 0x870($s0)
    local_0 = s6;                                               // 0x001459d0: sw $s6, 0($sp)
    func_00147c28();  // 147c28                                // 0x001459d8: jal 0x147c28
    v0 = *(int32_t*)((s0) + 0x168);                             // 0x001459f0: lw $v0, 0x168($s0)
label_0x1459f4:
    return;                                                     // 0x00145a14: jr $ra
    sp = sp + 0xa0;                                             // 0x00145a18: addiu $sp, $sp, 0xa0
}