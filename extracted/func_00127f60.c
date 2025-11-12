void func_00127f60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00127f60: addiu $sp, $sp, -0x20
    func_00127f60();  // 0x127e58                                // 0x00127f84: jal 0x127e58
    func_0010af38();  // 0x10ae00                                // 0x00127f8c: jal 0x10ae00
    a1 = 0x22 << 16;                                            // 0x00127f94: lui $a1, 0x22
    s1 = s1 - v0;                                               // 0x00127f98: subu $s1, $s1, $v0
    a1 = a1 + 0x24a8;                                           // 0x00127f9c: addiu $a1, $a1, 0x24a8
    a2 = s1 + -1;                                               // 0x00127fa0: addiu $a2, $s1, -1
    func_0010b0e8();  // 0x10af38                                // 0x00127fa4: jal 0x10af38
    func_0010af38();  // 0x10ae00                                // 0x00127fac: jal 0x10ae00
    func_0010af38();  // 0x10ae00                                // 0x00127fb8: jal 0x10ae00
    s0 = s0 + v0;                                               // 0x00127fbc: addu $s0, $s0, $v0
    a2 = 4;                                                     // 0x00127fd0: addiu $a2, $zero, 4
    a2 = a2 - v0;                                               // 0x00127fdc: subu $a2, $a2, $v0
    return func_00127f60();  // Tail call                        // 0x00127fe0: j 0x127e58
    sp = sp + 0x20;                                             // 0x00127fe4: addiu $sp, $sp, 0x20
    sp = sp + -0x10;                                            // 0x00127fe8: addiu $sp, $sp, -0x10
    a1 = a0 + a1;                                               // 0x00127fec: addu $a1, $a0, $a1
    a1 = a1 + -1;                                               // 0x00127ff4: addiu $a1, $a1, -1
    return func_00114dc0();  // Tail call                        // 0x00127ffc: j 0x114d18
    sp = sp + 0x10;                                             // 0x00128000: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00128004: nop 
    sp = sp + -0x10;                                            // 0x00128008: addiu $sp, $sp, -0x10
    v0 = 0x1f << 16;                                            // 0x0012800c: lui $v0, 0x1f
    s0 = v0 + 0x2ebc;                                           // 0x00128014: addiu $s0, $v0, 0x2ebc
    v1 = 0x1f << 16;                                            // 0x0012801c: lui $v1, 0x1f
    a0 = g_001f2ebc;  // Global at 0x001f2ebc                   // 0x00128020: lw $a0, 0($s0)
    v1 = v1 + 0x2eb8;                                           // 0x00128024: addiu $v1, $v1, 0x2eb8
    v0 = g_001f2eb8;  // Global at 0x001f2eb8                   // 0x00128028: lw $v0, 0($v1)
    if (a0 != 0) goto label_0x1280b8;                           // 0x0012802c: bnez $a0, 0x1280b8
    v0 = a0 + 1;                                                // 0x00128030: addiu $v0, $a0, 1
    a0 = 0x1f << 16;                                            // 0x00128034: lui $a0, 0x1f
    a0 = a0 + 0x2ec0;                                           // 0x0012803c: addiu $a0, $a0, 0x2ec0
    func_00107d30();  // 0x107c70                                // 0x00128040: jal 0x107c70
    a2 = 0x440;                                                 // 0x00128044: addiu $a2, $zero, 0x440
    a0 = 0x1f << 16;                                            // 0x00128048: lui $a0, 0x1f
    a0 = a0 + 0x3300;                                           // 0x0012804c: addiu $a0, $a0, 0x3300
    func_00107d30();  // 0x107c70                                // 0x00128054: jal 0x107c70
    a2 = 0x400;                                                 // 0x00128058: addiu $a2, $zero, 0x400
    a0 = 0x1f << 16;                                            // 0x0012805c: lui $a0, 0x1f
    a0 = a0 + 0x3708;                                           // 0x00128060: addiu $a0, $a0, 0x3708
    a1 = 0xff;                                                  // 0x00128064: addiu $a1, $zero, 0xff
    func_00107d30();  // 0x107c70                                // 0x00128068: jal 0x107c70
    a2 = 0x100;                                                 // 0x0012806c: addiu $a2, $zero, 0x100
    a0 = 0x1f << 16;                                            // 0x00128070: lui $a0, 0x1f
    a0 = a0 + 0x3808;                                           // 0x00128074: addiu $a0, $a0, 0x3808
    func_00107d30();  // 0x107c70                                // 0x0012807c: jal 0x107c70
    a2 = 0x20;                                                  // 0x00128080: addiu $a2, $zero, 0x20
    a0 = 0x1f << 16;                                            // 0x00128084: lui $a0, 0x1f
    a1 = 0x1f << 16;                                            // 0x00128088: lui $a1, 0x1f
    a2 = 0x1f << 16;                                            // 0x0012808c: lui $a2, 0x1f
    a3 = 0x1f << 16;                                            // 0x00128090: lui $a3, 0x1f
    v1 = 0x1f << 16;                                            // 0x00128094: lui $v1, 0x1f
    v0 = -1;                                                    // 0x00128098: addiu $v0, $zero, -1
    g_001f3828 = 0;  // Global at 0x001f3828                    // 0x0012809c: sw $zero, 0x3828($a0)
    g_001f3834 = v0;  // Global at 0x001f3834                   // 0x001280a0: sw $v0, 0x3834($v1)
    g_001f3700 = 0;  // Global at 0x001f3700                    // 0x001280a4: sw $zero, 0x3700($a1)
    g_001f382c = 0;  // Global at 0x001f382c                    // 0x001280a8: sw $zero, 0x382c($a2)
    g_001f3830 = 0;  // Global at 0x001f3830                    // 0x001280ac: sw $zero, 0x3830($a3)
    a0 = g_001f2ebc;  // Global at 0x001f2ebc                   // 0x001280b0: lw $a0, 0($s0)
    v0 = a0 + 1;                                                // 0x001280b4: addiu $v0, $a0, 1
label_0x1280b8:
    g_001f2ebc = v0;  // Global at 0x001f2ebc                   // 0x001280bc: sw $v0, 0($s0)
    return;                                                     // 0x001280c4: jr $ra
    sp = sp + 0x10;                                             // 0x001280c8: addiu $sp, $sp, 0x10
}