void func_001daf80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xa0;                                            // 0x001daf80: addiu $sp, $sp, -0xa0
    v1 = 0x31 << 16;                                            // 0x001daf84: lui $v1, 0x31
    at = 0x31 << 16;                                            // 0x001daf8c: lui $at, 0x31
    s0 = g_00313814;  // Global at 0x00313814                   // 0x001daf94: lw $s0, 0x3814($at)
    at = 0x31 << 16;                                            // 0x001daf98: lui $at, 0x31
    v0 = g_003137b7;  // Global at 0x003137b7                   // 0x001daf9c: lb $v0, 0x37b7($at)
    if (v0 != 0) goto label_0x1db000;                           // 0x001dafa0: bnez $v0, 0x1db000
    v1 = v1 + 0x37a0;                                           // 0x001dafa4: addiu $v1, $v1, 0x37a0
    a3 = g_003137ba;  // Global at 0x003137ba                   // 0x001dafa8: lhu $a3, 0x1a($v1)
    a1 = 0x24 << 16;                                            // 0x001dafac: lui $a1, 0x24
    a2 = 0x24 << 16;                                            // 0x001dafb0: lui $a2, 0x24
    a0 = sp + 0x20;                                             // 0x001dafb4: addiu $a0, $sp, 0x20
    a1 = &str_00247a00;  // "data/rom/scene/script"             // 0x001dafb8: addiu $a1, $a1, 0x7a00
    func_0010a570();  // 0x10a4d8                                // 0x001dafbc: jal 0x10a4d8
    a2 = &str_00247a10;  // "r%03d.evb"                         // 0x001dafc0: addiu $a2, $a2, 0x7a10
    a0 = sp + 0x20;                                             // 0x001dafc8: addiu $a0, $sp, 0x20
    a2 = 1;                                                     // 0x001dafcc: addiu $a2, $zero, 1
    func_001d33e0();  // 0x1d3390                                // 0x001dafd0: jal 0x1d3390
    if (v0 <= 0) goto label_0x1daff0;                           // 0x001dafd8: blez $v0, 0x1daff0
    /* nop */                                                   // 0x001dafdc: nop 
    func_0066b720();  // 0x66b720                               // 0x001dafe0: jal 0x66b720
    /* nop */                                                   // 0x001dafe4: nop 
    goto label_0x1db044;                                        // 0x001dafe8: b 0x1db044
label_0x1daff0:
    func_0066b670();  // 0x66b670                               // 0x001daff0: jal 0x66b670
    /* nop */                                                   // 0x001daff4: nop 
    goto label_0x1db040;                                        // 0x001daff8: b 0x1db040
    /* nop */                                                   // 0x001daffc: nop 
label_0x1db000:
    a2 = g_003137ba;  // Global at 0x003137ba                   // 0x001db000: lhu $a2, 0x1a($v1)
    a1 = 0x24 << 16;                                            // 0x001db004: lui $a1, 0x24
    a0 = sp + 0x20;                                             // 0x001db008: addiu $a0, $sp, 0x20
    func_0010a570();  // 0x10a4d8                                // 0x001db00c: jal 0x10a4d8
    a1 = &str_00247a28;  // "%s/r%03d.sgl"                      // 0x001db010: addiu $a1, $a1, 0x7a28
    func_001a9b80();  // 0x1a9b30                                // 0x001db018: jal 0x1a9b30
    a0 = sp + 0x20;                                             // 0x001db01c: addiu $a0, $sp, 0x20
    if (v0 == 0) goto label_0x1db038;                           // 0x001db020: beqz $v0, 0x1db038
    /* nop */                                                   // 0x001db024: nop 
    func_0066b720();  // 0x66b720                               // 0x001db028: jal 0x66b720
    /* nop */                                                   // 0x001db02c: nop 
    goto label_0x1db040;                                        // 0x001db030: b 0x1db040
    /* nop */                                                   // 0x001db034: nop 
label_0x1db038:
    func_0066b670();  // 0x66b670                               // 0x001db038: jal 0x66b670
    /* nop */                                                   // 0x001db03c: nop 
label_0x1db040:
label_0x1db044:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001db044: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001db048: jr $ra
    sp = sp + 0xa0;                                             // 0x001db04c: addiu $sp, $sp, 0xa0
}