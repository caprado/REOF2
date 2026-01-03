void func_00117220() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_4, local_8;
    
    sp = sp + -0x90;                                            // 0x00117220: addiu $sp, $sp, -0x90
    a0 = 0x25 << 16;                                            // 0x00117234: lui $a0, 0x25
    func_00116f08();  // 116f08                                // 0x00117258: jal 0x116f08
    a0 = a0 + -0x1ec0;                                          // 0x0011725c: addiu $a0, $a0, -0x1ec0
    if (s0 == 0) goto label_0x117354;                           // 0x00117264: beqz $s0, 0x117354
    v0 = -1;                                                    // 0x00117268: addiu $v0, $zero, -1
    v0 = *(int32_t*)((s0) + 0x18);                              // 0x0011726c: lw $v0, 0x18($s0)
    v1 = s2 & 1;                                                // 0x00117270: andi $v1, $s2, 1
    *(uint32_t*)(s1) = s0;                                      // 0x00117274: sw $s0, 0($s1)
    *(uint32_t*)((s1) + 4) = v0;                                // 0x00117278: sw $v0, 4($s1)
    *(uint32_t*)((s0) + 0x20) = s3;                             // 0x0011727c: sw $s3, 0x20($s0)
    *(uint32_t*)((s0) + 0x24) = s4;                             // 0x00117280: sw $s4, 0x24($s0)
    *(uint32_t*)((s0) + 0x28) = s5;                             // 0x00117284: sw $s5, 0x28($s0)
    *(uint32_t*)((s0) + 0x14) = s0;                             // 0x00117288: sw $s0, 0x14($s0)
    if (v1 != 0) goto label_0x117318;                           // 0x0011728c: bnez $v1, 0x117318
    *(uint32_t*)((s0) + 0x1c) = s1;                             // 0x00117290: sw $s1, 0x1c($s0)
    v0 = 1;                                                     // 0x00117294: addiu $v0, $zero, 1
    local_8 = 0;                                                // 0x00117298: sw $zero, 8($sp)
    local_4 = v0;                                               // 0x0011729c: sw $v0, 4($sp)
    DeleteSema();  // 0x1142e0                                  // 0x001172a0: jal 0x1142e0
    if (v0 >= 0) goto label_0x1172c0;                           // 0x001172a8: bgez $v0, 0x1172c0
    *(uint32_t*)((s1) + 8) = v0;                                // 0x001172ac: sw $v0, 8($s1)
    func_00116fb0();  // 116fb0                                // 0x001172b0: jal 0x116fb0
    goto label_0x117354;                                        // 0x001172b8: b 0x117354
    v0 = -3;                                                    // 0x001172bc: addiu $v0, $zero, -3
label_0x1172c0:
    a0 = 0x8000 << 16;                                          // 0x001172c0: lui $a0, 0x8000
    a0 = a0 | 0xc;                                              // 0x001172c8: ori $a0, $a0, 0xc
    a2 = 0x40;                                                  // 0x001172cc: addiu $a2, $zero, 0x40
    func_00116ac8();  // 116ac8                                // 0x001172d8: jal 0x116ac8
    if (v0 != 0) goto label_0x117300;                           // 0x001172e0: bnez $v0, 0x117300
    /* nop */                                                   // 0x001172e4: nop 
    func_00116fb0();  // 116fb0                                // 0x001172e8: jal 0x116fb0
    SignalSema();  // 0x1142f0                                  // 0x001172f0: jal 0x1142f0
    a0 = *(int32_t*)((s1) + 8);                                 // 0x001172f4: lw $a0, 8($s1)
    goto label_0x117354;                                        // 0x001172f8: b 0x117354
    v0 = -2;                                                    // 0x001172fc: addiu $v0, $zero, -2
label_0x117300:
    PollSema();  // 0x114320                                    // 0x00117300: jal 0x114320
    a0 = *(int32_t*)((s1) + 8);                                 // 0x00117304: lw $a0, 8($s1)
    SignalSema();  // 0x1142f0                                  // 0x00117308: jal 0x1142f0
    a0 = *(int32_t*)((s1) + 8);                                 // 0x0011730c: lw $a0, 8($s1)
    goto label_0x117354;                                        // 0x00117310: b 0x117354
label_0x117318:
    v0 = -1;                                                    // 0x00117318: addiu $v0, $zero, -1
    a0 = 0x8000 << 16;                                          // 0x0011731c: lui $a0, 0x8000
    *(uint32_t*)((s1) + 8) = v0;                                // 0x00117320: sw $v0, 8($s1)
    a0 = a0 | 0xc;                                              // 0x00117324: ori $a0, $a0, 0xc
    a2 = 0x40;                                                  // 0x0011732c: addiu $a2, $zero, 0x40
    func_00116ac8();  // 116ac8                                // 0x00117338: jal 0x116ac8
    if (v0 != 0) goto label_0x117354;                           // 0x00117340: bnez $v0, 0x117354
    func_00116fb0();  // 116fb0                                // 0x00117348: jal 0x116fb0
    v0 = -2;                                                    // 0x00117350: addiu $v0, $zero, -2
label_0x117354:
    return;                                                     // 0x00117370: jr $ra
    sp = sp + 0x90;                                             // 0x00117374: addiu $sp, $sp, 0x90
}