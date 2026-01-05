void func_001d3040() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001d3040: addiu $sp, $sp, -0x10
    if (t2 == 0) goto label_0x1d305c;                           // 0x001d304c: beqz $t2, 0x1d305c
    if (t1 != 0) goto label_0x1d3064;                           // 0x001d3054: bnez $t1, 0x1d3064
    t0 = a2 & 0xffff;                                           // 0x001d3058: andi $t0, $a2, 0xffff
label_0x1d305c:
    goto label_0x1d30a4;                                        // 0x001d305c: b 0x1d30a4
    v0 = -1;                                                    // 0x001d3060: addiu $v0, $zero, -1
label_0x1d3064:
    func_001d2ff0();  // 1d2ff0                                // 0x001d3068: jal 0x1d2ff0
    a1 = 4;                                                     // 0x001d306c: addiu $a1, $zero, 4
    a0 = t1 + 4;                                                // 0x001d3070: addiu $a0, $t1, 4
    func_001d2ff0();  // 1d2ff0                                // 0x001d3074: jal 0x1d2ff0
    t1 = t0 + v0;                                               // 0x001d3078: addu $t1, $t0, $v0
    t0 = t0 + v0;                                               // 0x001d307c: addu $t0, $t0, $v0
    func_001d2fa0();  // 1d2fa0                                // 0x001d3088: jal 0x1d2fa0
    a2 = 5;                                                     // 0x001d308c: addiu $a2, $zero, 5
    func_001d2fa0();  // 1d2fa0                                // 0x001d3094: jal 0x1d2fa0
    a0 = t2 + 5;                                                // 0x001d3098: addiu $a0, $t2, 5
    *(uint8_t*)((t2) + 0xa) = 0;                                // 0x001d309c: sb $zero, 0xa($t2)
label_0x1d30a4:
    return;                                                     // 0x001d30a8: jr $ra
    sp = sp + 0x10;                                             // 0x001d30ac: addiu $sp, $sp, 0x10
}