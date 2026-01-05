void func_001b7300() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_228;
    
    sp = sp + -0x270;                                           // 0x001b7300: addiu $sp, $sp, -0x270
    v1 = 1;                                                     // 0x001b7304: addiu $v1, $zero, 1
    v0 = (v1 < 8) ? 1 : 0;                                      // 0x001b730c: slti $v0, $v1, 8
    local_228 = a0;                                             // 0x001b7314: sw $a0, 0x228($sp)
    if (v0 != 0) goto label_0x1b7340;                           // 0x001b7330: bnez $v0, 0x1b7340
    goto label_0x1b734c;                                        // 0x001b7338: b 0x1b734c
label_0x1b7340:
    v0 = 8;                                                     // 0x001b7340: addiu $v0, $zero, 8
    v0 = v0 - v1;                                               // 0x001b7344: subu $v0, $v0, $v1
    v1 = v0 << 3;                                               // 0x001b7348: sll $v1, $v0, 3
label_0x1b734c:
    a1 = local_228;                                             // 0x001b734c: lw $a1, 0x228($sp)
    v0 = sp + 0x270;                                            // 0x001b7350: addiu $v0, $sp, 0x270
    s0 = sp + 0x20;                                             // 0x001b7354: addiu $s0, $sp, 0x20
    a2 = v0 - v1;                                               // 0x001b7358: subu $a2, $v0, $v1
    func_0010f528();  // 10f528                                // 0x001b735c: jal 0x10f528
    s0 = s0 + v0;                                               // 0x001b7364: addu $s0, $s0, $v0
    a0 = sp + 0x20;                                             // 0x001b7368: addiu $a0, $sp, 0x20
    func_001b7130();  // 1b7130                                // 0x001b736c: jal 0x1b7130
    *(uint8_t*)(s0) = 0;                                        // 0x001b7370: sb $zero, 0($s0)
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b7378: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b737c: jr $ra
    sp = sp + 0x270;                                            // 0x001b7380: addiu $sp, $sp, 0x270
}