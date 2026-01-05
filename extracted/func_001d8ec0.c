void func_001d8ec0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x160;                                           // 0x001d8ec0: addiu $sp, $sp, -0x160
    a1 = 0x24 << 16;                                            // 0x001d8ec4: lui $a1, 0x24
    at = 0x31 << 16;                                            // 0x001d8ecc: lui $at, 0x31
    v0 = 0x10 << 16;                                            // 0x001d8ed4: lui $v0, 0x10
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001d8ed8: dpa.w.ph $ac0, $sp, $s3
    a0 = sp + 0x60;                                             // 0x001d8edc: addiu $a0, $sp, 0x60
    a1 = &str_00247840;  // "%ssii_%03d.tm2"                    // 0x001d8ee4: addiu $a1, $a1, 0x7840
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d8ee8: addu.qb $zero, $sp, $s1
    s4 = 0x2600;                                                // 0x001d8eec: addiu $s4, $zero, 0x2600
    s0 = g_003137fc;  // Global at 0x003137fc                   // 0x001d8ef4: lw $s0, 0x37fc($at)
    func_0010ac68();  // 10ac68                                // 0x001d8ef8: jal 0x10ac68
    s2 = s0 + v0;                                               // 0x001d8efc: addu $s2, $s0, $v0
    s1 = sp + 0x60;                                             // 0x001d8f00: addiu $s1, $sp, 0x60
    a2 = 1;                                                     // 0x001d8f0c: addiu $a2, $zero, 1
    func_001d3390();  // 1d3390                                // 0x001d8f10: jal 0x1d3390
    if (v0 == 0) goto label_0x1d9018;                           // 0x001d8f18: beqz $v0, 0x1d9018
    func_001aee20();  // 1aee20                                // 0x001d8f20: jal 0x1aee20
label_0x1d8f2c:
    v0 = 0x22 << 16;                                            // 0x001d8f2c: lui $v0, 0x22
    v1 = s0 << 2;                                               // 0x001d8f30: sll $v1, $s0, 2
    v0 = v0 + -0x530;                                           // 0x001d8f34: addiu $v0, $v0, -0x530
    v0 = v0 + v1;                                               // 0x001d8f3c: addu $v0, $v0, $v1
    v0 = g_0021fad0;  // Global at 0x0021fad0                   // 0x001d8f40: lw $v0, 0($v0)
    s3 = s2 + v0;                                               // 0x001d8f44: addu $s3, $s2, $v0
    func_001d3600();  // 1d3600                                // 0x001d8f48: jal 0x1d3600
    s0 = s0 + 1;                                                // 0x001d8f50: addiu $s0, $s0, 1
    v0 = (s0 < 4) ? 1 : 0;                                      // 0x001d8f54: slti $v0, $s0, 4
    if (v0 != 0) goto label_0x1d8f2c;                           // 0x001d8f58: bnez $v0, 0x1d8f2c
    s4 = s4 + 1;                                                // 0x001d8f5c: addiu $s4, $s4, 1
    func_001d3cb0();  // 1d3cb0                                // 0x001d8f60: jal 0x1d3cb0
    if (v0 != 0) goto label_0x1d9018;                           // 0x001d8f68: bnez $v0, 0x1d9018
    at = 0x31 << 16;                                            // 0x001d8f6c: lui $at, 0x31
    v0 = g_003137b7;  // Global at 0x003137b7                   // 0x001d8f70: lb $v0, 0x37b7($at)
    if (v0 != 0) goto label_0x1d8fc8;                           // 0x001d8f74: bnez $v0, 0x1d8fc8
    /* nop */                                                   // 0x001d8f78: nop 
    at = 0x31 << 16;                                            // 0x001d8f7c: lui $at, 0x31
    a1 = 0x24 << 16;                                            // 0x001d8f80: lui $a1, 0x24
    a3 = g_003137ba;  // Global at 0x003137ba                   // 0x001d8f84: lhu $a3, 0x37ba($at)
    a2 = 0x24 << 16;                                            // 0x001d8f88: lui $a2, 0x24
    a0 = sp + 0x60;                                             // 0x001d8f8c: addiu $a0, $sp, 0x60
    a1 = &str_00247868;  // "data\\rom\\scene\\item_msg\\"      // 0x001d8f90: addiu $a1, $a1, 0x7868
    func_0010a4d8();  // 10a4d8                                // 0x001d8f94: jal 0x10a4d8
    a2 = &str_00247880;  // "sii_%03d.itt"                      // 0x001d8f98: addiu $a2, $a2, 0x7880
    a2 = 1;                                                     // 0x001d8fa4: addiu $a2, $zero, 1
    func_001d3390();  // 1d3390                                // 0x001d8fa8: jal 0x1d3390
    if (v0 == 0) goto label_0x1d9018;                           // 0x001d8fb0: beqz $v0, 0x1d9018
    func_001d3600();  // 1d3600                                // 0x001d8fb8: jal 0x1d3600
    goto label_0x1d901c;                                        // 0x001d8fc0: b 0x1d901c
label_0x1d8fc8:
    at = 0x31 << 16;                                            // 0x001d8fc8: lui $at, 0x31
    a1 = 0x24 << 16;                                            // 0x001d8fcc: lui $a1, 0x24
    a2 = g_003137ba;  // Global at 0x003137ba                   // 0x001d8fd0: lhu $a2, 0x37ba($at)
    a0 = sp + 0x60;                                             // 0x001d8fd4: addiu $a0, $sp, 0x60
    func_0010a4d8();  // 10a4d8                                // 0x001d8fd8: jal 0x10a4d8
    a1 = &str_002478a0;  // "data\\rom\\scene\\pit_tex\\init.tex" // 0x001d8fdc: addiu $a1, $a1, 0x78a0
    v0 = 1 << 16;                                               // 0x001d8fe0: lui $v0, 1
    func_001d3390();  // 1d3390                                // 0x001d8ff0: jal 0x1d3390
    a2 = v0 | 1;                                                // 0x001d8ff4: ori $a2, $v0, 1
    func_001aee20();  // 1aee20                                // 0x001d9000: jal 0x1aee20
    if (s0 == 0) goto label_0x1d9018;                           // 0x001d9008: beqz $s0, 0x1d9018
    func_001d3600();  // 1d3600                                // 0x001d9010: jal 0x1d3600
label_0x1d9018:
label_0x1d901c:
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001d901c: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d9024: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d9028: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d902c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d9030: jr $ra
    sp = sp + 0x160;                                            // 0x001d9034: addiu $sp, $sp, 0x160
}