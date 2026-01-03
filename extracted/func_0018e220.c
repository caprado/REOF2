void func_0018e220() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0018e220: addiu $sp, $sp, -0x10
    v0 = 0x13;                                                  // 0x0018e224: addiu $v0, $zero, 0x13
    v1 = *(uint8_t*)(a0);                                       // 0x0018e22c: lbu $v1, 0($a0)
    if (v1 == v0) goto label_0x18e2c0;                          // 0x0018e230: beq $v1, $v0, 0x18e2c0
    v0 = 0x12;                                                  // 0x0018e234: addiu $v0, $zero, 0x12
    if (v1 == v0) goto label_0x18e2b0;                          // 0x0018e238: beq $v1, $v0, 0x18e2b0
    /* nop */                                                   // 0x0018e23c: nop 
    v0 = 0x11;                                                  // 0x0018e240: addiu $v0, $zero, 0x11
    if (v1 == v0) goto label_0x18e2a0;                          // 0x0018e244: beq $v1, $v0, 0x18e2a0
    v0 = 0x23;                                                  // 0x0018e248: addiu $v0, $zero, 0x23
    if (v1 == v0) goto label_0x18e290;                          // 0x0018e24c: beq $v1, $v0, 0x18e290
    /* nop */                                                   // 0x0018e250: nop 
    v0 = 0x22;                                                  // 0x0018e254: addiu $v0, $zero, 0x22
    if (v1 == v0) goto label_0x18e280;                          // 0x0018e258: beq $v1, $v0, 0x18e280
    v0 = 0x21;                                                  // 0x0018e25c: addiu $v0, $zero, 0x21
    if (v1 == v0) goto label_0x18e270;                          // 0x0018e260: beq $v1, $v0, 0x18e270
    /* nop */                                                   // 0x0018e264: nop 
    goto label_0x18e2cc;                                        // 0x0018e268: b 0x18e2cc
label_0x18e270:
    func_0018e2e0();  // 18e2e0                                // 0x0018e270: jal 0x18e2e0
    /* nop */                                                   // 0x0018e274: nop 
    goto label_0x18e2c8;                                        // 0x0018e278: b 0x18e2c8
    /* nop */                                                   // 0x0018e27c: nop 
label_0x18e280:
    func_0018e360();  // 18e360                                // 0x0018e280: jal 0x18e360
    /* nop */                                                   // 0x0018e284: nop 
    goto label_0x18e2c8;                                        // 0x0018e288: b 0x18e2c8
    /* nop */                                                   // 0x0018e28c: nop 
label_0x18e290:
    func_0018e3f0();  // 18e3f0                                // 0x0018e290: jal 0x18e3f0
    /* nop */                                                   // 0x0018e294: nop 
    goto label_0x18e2c8;                                        // 0x0018e298: b 0x18e2c8
    /* nop */                                                   // 0x0018e29c: nop 
label_0x18e2a0:
    func_0018e4c0();  // 18e4c0                                // 0x0018e2a0: jal 0x18e4c0
    /* nop */                                                   // 0x0018e2a4: nop 
    goto label_0x18e2c8;                                        // 0x0018e2a8: b 0x18e2c8
    /* nop */                                                   // 0x0018e2ac: nop 
label_0x18e2b0:
    func_0018e570();  // 18e570                                // 0x0018e2b0: jal 0x18e570
    /* nop */                                                   // 0x0018e2b4: nop 
    goto label_0x18e2c8;                                        // 0x0018e2b8: b 0x18e2c8
    /* nop */                                                   // 0x0018e2bc: nop 
label_0x18e2c0:
    func_0018e630();  // 18e630                                // 0x0018e2c0: jal 0x18e630
    /* nop */                                                   // 0x0018e2c4: nop 
label_0x18e2c8:
label_0x18e2cc:
    return;                                                     // 0x0018e2cc: jr $ra
    sp = sp + 0x10;                                             // 0x0018e2d0: addiu $sp, $sp, 0x10
}