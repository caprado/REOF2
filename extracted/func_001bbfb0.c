/** @category: game/loop @status: complete @author: caprado */
void func_001bbfb0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_4c;
    
    sp = sp + -0x50;                                            // 0x001bbfb0: addiu $sp, $sp, -0x50
    at = 0x31 << 16;                                            // 0x001bbfb4: lui $at, 0x31
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001bbfc0: addu.qb $zero, $sp, $s1
    s0 = g_00313884;  // Global at 0x00313884                   // 0x001bbfc8: lh $s0, 0x3884($at)
    if (s0 == 0) goto label_0x1bc174;                           // 0x001bbfcc: beqz $s0, 0x1bc174
    /* nop */                                                   // 0x001bbfd0: nop 
    v0 = 4;                                                     // 0x001bbfd4: addiu $v0, $zero, 4
    if (s0 != v0) goto label_0x1bbff0;                          // 0x001bbfd8: bne $s0, $v0, 0x1bbff0
    v0 = (s0 < 2) ? 1 : 0;                                      // 0x001bbfdc: slti $v0, $s0, 2
    func_001bc200();  // 1bc200                                // 0x001bbfe0: jal 0x1bc200
    /* nop */                                                   // 0x001bbfe4: nop 
    goto label_0x1bc178;                                        // 0x001bbfe8: b 0x1bc178
label_0x1bbff0:
    func_001d3cb0();  // 1d3cb0                                // 0x001bbff4: jal 0x1d3cb0
    s1 = v0 ^ 1;                                                // 0x001bbff8: xori $s1, $v0, 1
    local_4c = v0;                                              // 0x001bbffc: sw $v0, 0x4c($sp)
    v1 = local_4c;                                              // 0x001bc000: lw $v1, 0x4c($sp)
    if (v1 == 0) goto label_0x1bc174;                           // 0x001bc004: beqz $v1, 0x1bc174
    /* nop */                                                   // 0x001bc008: nop 
    func_001ae8d0();  // 1ae8d0                                // 0x001bc00c: jal 0x1ae8d0
    /* nop */                                                   // 0x001bc010: nop 
    a0 = 0xd;                                                   // 0x001bc014: addiu $a0, $zero, 0xd
    func_001aefd0();  // 1aefd0                                // 0x001bc018: jal 0x1aefd0
    a0 = 0x5f;                                                  // 0x001bc020: addiu $a0, $zero, 0x5f
    func_001aefd0();  // 1aefd0                                // 0x001bc024: jal 0x1aefd0
    a1 = 5;                                                     // 0x001bc028: addiu $a1, $zero, 5
    a0 = 0x60;                                                  // 0x001bc02c: addiu $a0, $zero, 0x60
    func_001aefd0();  // 1aefd0                                // 0x001bc030: jal 0x1aefd0
    a0 = 0x63;                                                  // 0x001bc038: addiu $a0, $zero, 0x63
    func_001aefd0();  // 1aefd0                                // 0x001bc03c: jal 0x1aefd0
    a0 = 0x6c;                                                  // 0x001bc044: addiu $a0, $zero, 0x6c
    func_001aefd0();  // 1aefd0                                // 0x001bc048: jal 0x1aefd0
    a0 = 1;                                                     // 0x001bc050: addiu $a0, $zero, 1
    func_0019d440();  // 19d440                                // 0x001bc054: jal 0x19d440
    a1 = sp + 0x4c;                                             // 0x001bc058: addiu $a1, $sp, 0x4c
    a1 = local_4c;                                              // 0x001bc05c: lw $a1, 0x4c($sp)
    func_001aefd0();  // 1aefd0                                // 0x001bc060: jal 0x1aefd0
    a0 = 4;                                                     // 0x001bc064: addiu $a0, $zero, 4
    a0 = 4;                                                     // 0x001bc068: addiu $a0, $zero, 4
    func_001aea70();  // 1aea70                                // 0x001bc06c: jal 0x1aea70
    a1 = 5;                                                     // 0x001bc070: addiu $a1, $zero, 5
    v1 = s1 << 2;                                               // 0x001bc074: sll $v1, $s1, 2
    v0 = 0x22 << 16;                                            // 0x001bc078: lui $v0, 0x22
    v1 = v1 + s1;                                               // 0x001bc07c: addu $v1, $v1, $s1
    v0 = v0 + -0x33f0;                                          // 0x001bc080: addiu $v0, $v0, -0x33f0
    v1 = v1 << 2;                                               // 0x001bc084: sll $v1, $v1, 2
    func_001ab230();  // 1ab230                                // 0x001bc088: jal 0x1ab230
    a0 = v0 + v1;                                               // 0x001bc08c: addu $a0, $v0, $v1
    v1 = 3;                                                     // 0x001bc090: addiu $v1, $zero, 3
    if (s0 != v1) goto label_0x1bc174;                          // 0x001bc094: bne $s0, $v1, 0x1bc174
    /* nop */                                                   // 0x001bc098: nop 
    func_001c1f20();  // 1c1f20                                // 0x001bc09c: jal 0x1c1f20
    goto label_0x1bc0b8;                                        // 0x001bc0a4: b 0x1bc0b8
    v1 = g_0021cc10;  // Global at 0x0021cc10                   // 0x001bc0a8: lw $v1, 0($v0)
label_0x1bc0ac:
    s0 = s0 + 1;                                                // 0x001bc0ac: addiu $s0, $s0, 1
    v0 = v0 + 4;                                                // 0x001bc0b0: addiu $v0, $v0, 4
    v1 = g_0021cc14;  // Global at 0x0021cc14                   // 0x001bc0b4: lw $v1, 0($v0)
label_0x1bc0b8:
    /* nop */                                                   // 0x001bc0b8: nop 
    /* nop */                                                   // 0x001bc0bc: nop 
    if (v1 != 0) goto label_0x1bc0ac;                           // 0x001bc0c0: bnez $v1, 0x1bc0ac
    /* nop */                                                   // 0x001bc0c4: nop 
    v0 = s0 + -1;                                               // 0x001bc0c8: addiu $v0, $s0, -1
    a0 = 0x20;                                                  // 0x001bc0cc: addiu $a0, $zero, 0x20
    func_001b4fd0();  // 1b4fd0                                // 0x001bc0d0: jal 0x1b4fd0
    s0 = s0 + v0;                                               // 0x001bc0d4: addu $s0, $s0, $v0
    func_001b5040();  // 1b5040                                // 0x001bc0d8: jal 0x1b5040
    v0 = 0x8080 << 16;                                          // 0x001bc0e0: lui $v0, 0x8080
    func_001b5050();  // 1b5050                                // 0x001bc0e4: jal 0x1b5050
    a0 = v0 | 0x8080;                                           // 0x001bc0e8: ori $a0, $v0, 0x8080
    v0 = s0 << 5;                                               // 0x001bc0ec: sll $v0, $s0, 5
    v1 = 0x1c0;                                                 // 0x001bc0f0: addiu $v1, $zero, 0x1c0
    v0 = v1 - v0;                                               // 0x001bc0f4: subu $v0, $v1, $v0
    if (v0 >= 0) goto label_0x1bc108;                           // 0x001bc0f8: bgez $v0, 0x1bc108
    s0 = v0 >> 1;                                               // 0x001bc0fc: sra $s0, $v0, 1
    v0 = v0 + 1;                                                // 0x001bc100: addiu $v0, $v0, 1
    s0 = v0 >> 1;                                               // 0x001bc104: sra $s0, $v0, 1
label_0x1bc108:
    func_001c1f20();  // 1c1f20                                // 0x001bc108: jal 0x1c1f20
    s0 = s0 + 0x10;                                             // 0x001bc10c: addiu $s0, $s0, 0x10
    v1 = 0x4240 << 16;                                          // 0x001bc110: lui $v1, 0x4240
    /* move to FPU: $v1, $f0 */                                 // 0x001bc114: mtc1 $v1, $f0
    /* nop */                                                   // 0x001bc118: nop 
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x001bc11c: cvt.w.s $f0, $f0
    /* move from FPU: $s2, $f0 */                               // 0x001bc120: mfc1 $s2, $f0
    goto label_0x1bc168;                                        // 0x001bc124: b 0x1bc168
label_0x1bc12c:
    func_001b6150();  // 1b6150                                // 0x001bc12c: jal 0x1b6150
    /* nop */                                                   // 0x001bc130: nop 
    v0 = v0 << 4;                                               // 0x001bc134: sll $v0, $v0, 4
    v1 = 0x280;                                                 // 0x001bc138: addiu $v1, $zero, 0x280
    v0 = v1 - v0;                                               // 0x001bc13c: subu $v0, $v1, $v0
    if (v0 >= 0) goto label_0x1bc150;                           // 0x001bc140: bgez $v0, 0x1bc150
    a0 = v0 >> 1;                                               // 0x001bc144: sra $a0, $v0, 1
    v0 = v0 + 1;                                                // 0x001bc148: addiu $v0, $v0, 1
    a0 = v0 >> 1;                                               // 0x001bc14c: sra $a0, $v0, 1
label_0x1bc150:
    func_001b4ff0();  // 1b4ff0                                // 0x001bc150: jal 0x1b4ff0
    func_001b5090();  // 1b5090                                // 0x001bc158: jal 0x1b5090
    a0 = *(int32_t*)(s1);                                       // 0x001bc15c: lw $a0, 0($s1)
    s1 = s1 + 4;                                                // 0x001bc160: addiu $s1, $s1, 4
    s0 = s0 + s2;                                               // 0x001bc164: addu $s0, $s0, $s2
label_0x1bc168:
    a0 = *(int32_t*)(s1);                                       // 0x001bc168: lw $a0, 0($s1)
    if (a0 != 0) goto label_0x1bc12c;                           // 0x001bc16c: bnez $a0, 0x1bc12c
    /* nop */                                                   // 0x001bc170: nop 
label_0x1bc174:
label_0x1bc178:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001bc178: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001bc17c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001bc180: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001bc184: jr $ra
    sp = sp + 0x50;                                             // 0x001bc188: addiu $sp, $sp, 0x50
}