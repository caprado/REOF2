void func_001db220() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xa0;                                            // 0x001db220: addiu $sp, $sp, -0xa0
    a1 = 0x31 << 16;                                            // 0x001db224: lui $a1, 0x31
    a1 = a1 + 0x37a0;                                           // 0x001db22c: addiu $a1, $a1, 0x37a0
    if (a0 == 0) goto label_0x1db24c;                           // 0x001db230: beqz $a0, 0x1db24c
    at = 0x31 << 16;                                            // 0x001db238: lui $at, 0x31
    v0 = 1 << 16;                                               // 0x001db23c: lui $v0, 1
    v1 = g_0031381c;  // Global at 0x0031381c                   // 0x001db240: lw $v1, 0x381c($at)
    goto label_0x1db254;                                        // 0x001db244: b 0x1db254
    s0 = v1 + v0;                                               // 0x001db248: addu $s0, $v1, $v0
label_0x1db24c:
    at = 0x31 << 16;                                            // 0x001db24c: lui $at, 0x31
    s0 = g_00313828;  // Global at 0x00313828                   // 0x001db250: lw $s0, 0x3828($at)
label_0x1db254:
    at = 0x31 << 16;                                            // 0x001db254: lui $at, 0x31
    v0 = g_003137b7;  // Global at 0x003137b7                   // 0x001db258: lb $v0, 0x37b7($at)
    if (v0 != 0) goto label_0x1db29c;                           // 0x001db25c: bnez $v0, 0x1db29c
    /* nop */                                                   // 0x001db260: nop 
    a3 = g_003137ba;  // Global at 0x003137ba                   // 0x001db264: lhu $a3, 0x1a($a1)
    a2 = 0x24 << 16;                                            // 0x001db268: lui $a2, 0x24
    a0 = sp + 0x20;                                             // 0x001db26c: addiu $a0, $sp, 0x20
    a2 = &str_00247ae8;  // "dm%03d.bin"                        // 0x001db270: addiu $a2, $a2, 0x7ae8
    a1 = 0x24 << 16;                                            // 0x001db274: lui $a1, 0x24
    func_0010a4d8();  // 10a4d8                                // 0x001db278: jal 0x10a4d8
    a1 = &str_00247ad8;  // "data/edit/eve"                     // 0x001db27c: addiu $a1, $a1, 0x7ad8
    a0 = sp + 0x20;                                             // 0x001db280: addiu $a0, $sp, 0x20
    a2 = 1;                                                     // 0x001db288: addiu $a2, $zero, 1
    func_001d3390();  // 1d3390                                // 0x001db28c: jal 0x1d3390
    goto label_0x1db2bc;                                        // 0x001db294: b 0x1db2bc
    /* nop */                                                   // 0x001db298: nop 
label_0x1db29c:
    a2 = g_00247af2;  // Global at 0x00247af2                   // 0x001db29c: lhu $a2, 0x1a($a1)
    a0 = sp + 0x20;                                             // 0x001db2a0: addiu $a0, $sp, 0x20
    a1 = 0x24 << 16;                                            // 0x001db2a4: lui $a1, 0x24
    func_0010a4d8();  // 10a4d8                                // 0x001db2a8: jal 0x10a4d8
    a1 = &str_00247af8;  // "data/rom/scene/spk/r%03d/sp%02d%02d%02d.bin" // 0x001db2ac: addiu $a1, $a1, 0x7af8
    a0 = sp + 0x20;                                             // 0x001db2b0: addiu $a0, $sp, 0x20
    func_001a9b30();  // 1a9b30                                // 0x001db2b4: jal 0x1a9b30
label_0x1db2bc:
    if (v0 > 0) goto label_0x1db2c8;                            // 0x001db2bc: bgtz $v0, 0x1db2c8
    /* nop */                                                   // 0x001db2c0: nop 
    *(uint32_t*)(s0) = 0;                                       // 0x001db2c4: sw $zero, 0($s0)
label_0x1db2c8:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001db2cc: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001db2d0: jr $ra
    sp = sp + 0xa0;                                             // 0x001db2d4: addiu $sp, $sp, 0xa0
}