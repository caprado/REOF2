void func_00164110() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00164110: addiu $sp, $sp, -0x20
    if (a2 != 0) goto label_0x164140;                           // 0x00164124: bnez $a2, 0x164140
    func_001302c8();  // 0x130280                                // 0x0016412c: jal 0x130280
    /* nop */                                                   // 0x00164130: nop 
    goto label_0x16419c;                                        // 0x00164134: b 0x16419c
    /* nop */                                                   // 0x0016413c: nop 
label_0x164140:
    v0 = 1;                                                     // 0x00164140: addiu $v0, $zero, 1
    if (a2 != v0) goto label_0x164168;                          // 0x00164144: bnel $a2, $v0, 0x164168
    v0 = 2;                                                     // 0x00164148: addiu $v0, $zero, 2
    func_001302e0();  // 0x1302c8                                // 0x0016414c: jal 0x1302c8
    /* nop */                                                   // 0x00164150: nop 
    func_001302c8();  // 0x130280                                // 0x00164158: jal 0x130280
    a1 = v0 + s1;                                               // 0x0016415c: addu $a1, $v0, $s1
    goto label_0x16419c;                                        // 0x00164160: b 0x16419c
label_0x164168:
    if (a2 != v0) goto label_0x16419c;                          // 0x00164168: bnel $a2, $v0, 0x16419c
    func_00130b08();  // 0x130b00                                // 0x00164170: jal 0x130b00
    /* nop */                                                   // 0x00164174: nop 
    a1 = v0 + 0x7ff;                                            // 0x0016417c: addiu $a1, $v0, 0x7ff
    v0 = v0 + 0xffe;                                            // 0x00164180: addiu $v0, $v0, 0xffe
    v1 = (a1 < 0) ? 1 : 0;                                      // 0x00164184: slti $v1, $a1, 0
    if (v1 != 0) a1 = v0;                                       // 0x00164188: movn $a1, $v0, $v1
    a1 = a1 >> 0xb;                                             // 0x0016418c: sra $a1, $a1, 0xb
    func_001302c8();  // 0x130280                                // 0x00164190: jal 0x130280
    a1 = a1 + s1;                                               // 0x00164194: addu $a1, $a1, $s1
label_0x16419c:
    return;                                                     // 0x001641a8: jr $ra
    sp = sp + 0x20;                                             // 0x001641ac: addiu $sp, $sp, 0x20
}