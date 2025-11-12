void func_0017c0e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_20, local_24, local_28, local_2c, local_30, local_34, local_4;
    uint32_t local_8, local_c;
    
    sp = sp + -0x80;                                            // 0x0017c0e0: addiu $sp, $sp, -0x80
    t2 = 0x40;                                                  // 0x0017c0e4: addiu $t2, $zero, 0x40
    s0 = s6 + 4;                                                // 0x0017c11c: addiu $s0, $s6, 4
    v1 = *(int32_t*)((s0) + 8);                                 // 0x0017c120: lw $v1, 8($s0)
    t1 = *(int32_t*)((s0) + 4);                                 // 0x0017c124: lw $t1, 4($s0)
    t0 = *(int32_t*)((s2) + 8);                                 // 0x0017c128: lw $t0, 8($s2)
    v0 = (unsigned)v1 >> 0x1f;                                  // 0x0017c12c: srl $v0, $v1, 0x1f
    a2 = *(int32_t*)((s2) + 0xc);                               // 0x0017c130: lw $a2, 0xc($s2)
    v0 = v1 + v0;                                               // 0x0017c134: addu $v0, $v1, $v0
    a1 = *(int32_t*)(s0);                                       // 0x0017c138: lw $a1, 0($s0)
    if (t0 != 0) s5 = t0;                                       // 0x0017c140: movn $s5, $t0, $t0
    local_c = t2;                                               // 0x0017c144: sw $t2, 0xc($sp)
    local_0 = a1;                                               // 0x0017c148: sw $a1, 0($sp)
    s3 = v0 >> 1;                                               // 0x0017c14c: sra $s3, $v0, 1
    local_4 = t1;                                               // 0x0017c150: sw $t1, 4($sp)
    if (a2 == 0) goto label_0x17c160;                           // 0x0017c154: beqz $a2, 0x17c160
    local_8 = v1;                                               // 0x0017c158: sw $v1, 8($sp)
label_0x17c160:
    func_0017c250();  // 0x17c1f0                                // 0x0017c160: jal 0x17c1f0
    /* nop */                                                   // 0x0017c164: nop 
    a2 = 0x20;                                                  // 0x0017c168: addiu $a2, $zero, 0x20
    v1 = *(int32_t*)((s0) + 8);                                 // 0x0017c16c: lw $v1, 8($s0)
    a1 = 0x10;                                                  // 0x0017c170: addiu $a1, $zero, 0x10
    local_20 = v0;                                              // 0x0017c174: sw $v0, 0x20($sp)
    v0 = (unsigned)v1 >> 0x1f;                                  // 0x0017c178: srl $v0, $v1, 0x1f
    a0 = *(int32_t*)((s0) + 4);                                 // 0x0017c17c: lw $a0, 4($s0)
    v1 = v1 + v0;                                               // 0x0017c180: addu $v1, $v1, $v0
    local_24 = s4;                                              // 0x0017c184: sw $s4, 0x24($sp)
    v1 = v1 >> 1;                                               // 0x0017c188: sra $v1, $v1, 1
    local_30 = a0;                                              // 0x0017c18c: sw $a0, 0x30($sp)
    local_28 = s5;                                              // 0x0017c190: sw $s5, 0x28($sp)
    local_2c = s3;                                              // 0x0017c194: sw $s3, 0x2c($sp)
    if (s1 == a1) goto label_0x17c1c8;                          // 0x0017c198: beq $s1, $a1, 0x17c1c8
    local_34 = v1;                                              // 0x0017c19c: sw $v1, 0x34($sp)
    if (s1 != a2) goto label_0x17c1cc;                          // 0x0017c1a0: bnel $s1, $a2, 0x17c1cc
    a2 = 0xd;                                                   // 0x0017c1ac: addiu $a2, $zero, 0xd
    func_0017c3c8();  // 0x17c250                                // 0x0017c1b0: jal 0x17c250
    a2 = *(int32_t*)((s2) + 0x3c);                              // 0x0017c1b8: lw $a2, 0x3c($s2)
    func_0014a510();  // 0x148f98                                // 0x0017c1c0: jal 0x148f98
    a1 = sp + 0x20;                                             // 0x0017c1c4: addiu $a1, $sp, 0x20
label_0x17c1c8:
label_0x17c1cc:
    return;                                                     // 0x0017c1e8: jr $ra
    sp = sp + 0x80;                                             // 0x0017c1ec: addiu $sp, $sp, 0x80
}