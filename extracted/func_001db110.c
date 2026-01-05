void func_001db110() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xa0;                                            // 0x001db110: addiu $sp, $sp, -0xa0
    v1 = 0x31 << 16;                                            // 0x001db114: lui $v1, 0x31
    at = 0x31 << 16;                                            // 0x001db11c: lui $at, 0x31
    s0 = g_0031382c;  // Global at 0x0031382c                   // 0x001db124: lw $s0, 0x382c($at)
    at = 0x31 << 16;                                            // 0x001db128: lui $at, 0x31
    v0 = g_003137b7;  // Global at 0x003137b7                   // 0x001db12c: lb $v0, 0x37b7($at)
    if (v0 != 0) goto label_0x1db1ac;                           // 0x001db130: bnez $v0, 0x1db1ac
    v1 = v1 + 0x37a0;                                           // 0x001db134: addiu $v1, $v1, 0x37a0
    at = 0x31 << 16;                                            // 0x001db138: lui $at, 0x31
    v0 = g_003137dd;  // Global at 0x003137dd                   // 0x001db13c: lbu $v0, 0x37dd($at)
    if (v0 != 0) goto label_0x1db16c;                           // 0x001db140: bnez $v0, 0x1db16c
    /* nop */                                                   // 0x001db144: nop 
    a3 = g_003137ba;  // Global at 0x003137ba                   // 0x001db148: lhu $a3, 0x1a($v1)
    a1 = 0x24 << 16;                                            // 0x001db14c: lui $a1, 0x24
    a2 = 0x24 << 16;                                            // 0x001db150: lui $a2, 0x24
    a0 = sp + 0x20;                                             // 0x001db154: addiu $a0, $sp, 0x20
    a1 = &str_00247a78;  // "data/rom/scene/message"            // 0x001db158: addiu $a1, $a1, 0x7a78
    func_0010a4d8();  // 10a4d8                                // 0x001db15c: jal 0x10a4d8
    a2 = &str_00247a90;  // "%s/r%03du.bin"                     // 0x001db160: addiu $a2, $a2, 0x7a90
    goto label_0x1db18c;                                        // 0x001db164: b 0x1db18c
    a0 = sp + 0x20;                                             // 0x001db168: addiu $a0, $sp, 0x20
label_0x1db16c:
    a3 = g_003137ba;  // Global at 0x003137ba                   // 0x001db16c: lhu $a3, 0x1a($v1)
    a1 = 0x24 << 16;                                            // 0x001db170: lui $a1, 0x24
    a2 = 0x24 << 16;                                            // 0x001db174: lui $a2, 0x24
    a0 = sp + 0x20;                                             // 0x001db178: addiu $a0, $sp, 0x20
    a1 = &str_00247aa8;  // "r%03d.bin"                         // 0x001db17c: addiu $a1, $a1, 0x7aa8
    func_0010a4d8();  // 10a4d8                                // 0x001db180: jal 0x10a4d8
    a2 = &str_00247a90;  // "%s/r%03du.bin"                     // 0x001db184: addiu $a2, $a2, 0x7a90
    a0 = sp + 0x20;                                             // 0x001db188: addiu $a0, $sp, 0x20
label_0x1db18c:
    a2 = 1;                                                     // 0x001db190: addiu $a2, $zero, 1
    func_001d3390();  // 1d3390                                // 0x001db194: jal 0x1d3390
    if (v0 > 0) goto label_0x1db204;                            // 0x001db19c: bgtz $v0, 0x1db204
    /* nop */                                                   // 0x001db1a0: nop 
    goto label_0x1db204;                                        // 0x001db1a4: b 0x1db204
    *(uint32_t*)(s0) = 0;                                       // 0x001db1a8: sw $zero, 0($s0)
label_0x1db1ac:
    at = 0x31 << 16;                                            // 0x001db1ac: lui $at, 0x31
    v0 = g_003137dd;  // Global at 0x003137dd                   // 0x001db1b0: lbu $v0, 0x37dd($at)
    if (v0 != 0) goto label_0x1db1d8;                           // 0x001db1b4: bnez $v0, 0x1db1d8
    /* nop */                                                   // 0x001db1b8: nop 
    a2 = g_003137ba;  // Global at 0x003137ba                   // 0x001db1bc: lhu $a2, 0x1a($v1)
    a1 = 0x24 << 16;                                            // 0x001db1c0: lui $a1, 0x24
    a0 = sp + 0x20;                                             // 0x001db1c4: addiu $a0, $sp, 0x20
    func_0010a4d8();  // 10a4d8                                // 0x001db1c8: jal 0x10a4d8
    a1 = &str_00247ab8;  // "r%03du.bin"                        // 0x001db1cc: addiu $a1, $a1, 0x7ab8
    goto label_0x1db1f0;                                        // 0x001db1d0: b 0x1db1f0
    a0 = sp + 0x20;                                             // 0x001db1d4: addiu $a0, $sp, 0x20
label_0x1db1d8:
    a2 = g_003137ba;  // Global at 0x003137ba                   // 0x001db1d8: lhu $a2, 0x1a($v1)
    a1 = 0x24 << 16;                                            // 0x001db1dc: lui $a1, 0x24
    a0 = sp + 0x20;                                             // 0x001db1e0: addiu $a0, $sp, 0x20
    func_0010a4d8();  // 10a4d8                                // 0x001db1e4: jal 0x10a4d8
    a1 = &str_00247ac8;  // "%s/dm%03d.bin"                     // 0x001db1e8: addiu $a1, $a1, 0x7ac8
    a0 = sp + 0x20;                                             // 0x001db1ec: addiu $a0, $sp, 0x20
label_0x1db1f0:
    func_001a9b30();  // 1a9b30                                // 0x001db1f0: jal 0x1a9b30
    if (v0 > 0) goto label_0x1db204;                            // 0x001db1f8: bgtz $v0, 0x1db204
    /* nop */                                                   // 0x001db1fc: nop 
    *(uint32_t*)(s0) = 0;                                       // 0x001db200: sw $zero, 0($s0)
label_0x1db204:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001db208: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001db20c: jr $ra
    sp = sp + 0xa0;                                             // 0x001db210: addiu $sp, $sp, 0xa0
}