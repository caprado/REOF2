void func_001ba1d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001ba1d0: addiu $sp, $sp, -0x10
    a0 = 1;                                                     // 0x001ba1d4: addiu $a0, $zero, 1
    v0 = *(int32_t*)((gp) + -0x6384);                           // 0x001ba1dc: lw $v0, -0x6384($gp)
    if (v0 == a0) goto label_0x1ba244;                          // 0x001ba1e0: beq $v0, $a0, 0x1ba244
    /* nop */                                                   // 0x001ba1e4: nop 
    if (v0 == 0) goto label_0x1ba1fc;                           // 0x001ba1e8: beqz $v0, 0x1ba1fc
    a0 = 0x280;                                                 // 0x001ba1ec: addiu $a0, $zero, 0x280
    goto label_0x1ba290;                                        // 0x001ba1f0: b 0x1ba290
label_0x1ba1f8:
    a0 = 0x280;                                                 // 0x001ba1f8: addiu $a0, $zero, 0x280
label_0x1ba1fc:
    func_0019f130();  // 0x19f080                                // 0x001ba1fc: jal 0x19f080
    a1 = 0x1c0;                                                 // 0x001ba200: addiu $a1, $zero, 0x1c0
    /* nop */                                                   // 0x001ba204: nop 
    /* nop */                                                   // 0x001ba208: nop 
    if (v0 == 0) goto label_0x1ba1f8;                           // 0x001ba20c: beqz $v0, 0x1ba1f8
    /* nop */                                                   // 0x001ba210: nop 
    func_001ba8b0();  // 0x1ba660                                // 0x001ba214: jal 0x1ba660
    /* nop */                                                   // 0x001ba218: nop 
    func_001ba9c0();  // 0x1ba960                                // 0x001ba21c: jal 0x1ba960
    /* nop */                                                   // 0x001ba220: nop 
    a0 = 0x1c << 16;                                            // 0x001ba224: lui $a0, 0x1c
    func_001b7720();  // 0x1b76c0                                // 0x001ba22c: jal 0x1b76c0
    a0 = a0 + -0x4180;                                          // 0x001ba230: addiu $a0, $a0, -0x4180
    v0 = *(int32_t*)((gp) + -0x6384);                           // 0x001ba234: lw $v0, -0x6384($gp)
    v0 = v0 + 1;                                                // 0x001ba238: addiu $v0, $v0, 1
    goto label_0x1ba28c;                                        // 0x001ba23c: b 0x1ba28c
    *(uint32_t*)((gp) + -0x6384) = v0;                          // 0x001ba240: sw $v0, -0x6384($gp)
label_0x1ba244:
    func_001ba310();  // 0x1ba2a0                                // 0x001ba244: jal 0x1ba2a0
    /* nop */                                                   // 0x001ba248: nop 
    v0 = *(uint16_t*)((gp) + -0x633c);                          // 0x001ba24c: lhu $v0, -0x633c($gp)
    v1 = *(uint16_t*)((gp) + -0x6334);                          // 0x001ba250: lhu $v1, -0x6334($gp)
    v0 = v0 + 1;                                                // 0x001ba254: addiu $v0, $v0, 1
    *(uint16_t*)((gp) + -0x6338) = v1;                          // 0x001ba258: sh $v1, -0x6338($gp)
    func_001a8a60();  // 0x1a8a50                                // 0x001ba25c: jal 0x1a8a50
    *(uint16_t*)((gp) + -0x633c) = v0;                          // 0x001ba260: sh $v0, -0x633c($gp)
    func_00112170();  // 0x112118                                // 0x001ba264: jal 0x112118
    func_001aee20();  // 0x1aee10                                // 0x001ba26c: jal 0x1aee10
    *(float*)((gp) + -0x6388) = FPU_F0;  // Store float         // 0x001ba270: swc1 $f0, -0x6388($gp)
    if (v0 == 0) goto label_0x1ba284;                           // 0x001ba274: beqz $v0, 0x1ba284
    /* nop */                                                   // 0x001ba278: nop 
    func_001aee10();  // 0x1aed20                                // 0x001ba27c: jal 0x1aed20
    /* nop */                                                   // 0x001ba280: nop 
label_0x1ba284:
    func_001b76c0();  // 0x1b74b0                                // 0x001ba284: jal 0x1b74b0
    /* nop */                                                   // 0x001ba288: nop 
label_0x1ba28c:
label_0x1ba290:
    return;                                                     // 0x001ba294: jr $ra
    sp = sp + 0x10;                                             // 0x001ba298: addiu $sp, $sp, 0x10
}