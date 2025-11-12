void func_00115710() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00115710: addiu $sp, $sp, -0x40
    v0 = 3;                                                     // 0x00115714: addiu $v0, $zero, 3
    if (a0 == v0) goto label_0x11581c;                          // 0x0011572c: beq $a0, $v0, 0x11581c
    v0 = (a0 < 4) ? 1 : 0;                                      // 0x00115734: slti $v0, $a0, 4
    if (v0 != 0) goto label_0x115750;                           // 0x00115738: bnez $v0, 0x115750
    v0 = 4;                                                     // 0x0011573c: addiu $v0, $zero, 4
    if (a0 == v0) goto label_0x11586c;                          // 0x00115740: beq $a0, $v0, 0x11586c
    goto label_0x115894;                                        // 0x00115748: b 0x115894
label_0x115750:
    if (a0 <= 0) goto label_0x115890;                           // 0x00115750: blez $a0, 0x115890
    /* beqzl $s0, 0x1157c0 */                                   // 0x00115758: beqzl $s0, 0x1157c0
    s2 = *(int32_t*)((s1) + 0x14);                              // 0x0011575c: lw $s2, 0x14($s1)
    v0 = *(int32_t*)((s1) + 8);                                 // 0x00115760: lw $v0, 8($s1)
    v0 = v0 + s0;                                               // 0x00115764: addu $v0, $v0, $s0
    v0 = ((unsigned)v0 < (unsigned)0x141) ? 1 : 0;              // 0x00115768: sltiu $v0, $v0, 0x141
    if (v0 != 0) goto label_0x11577c;                           // 0x0011576c: bnez $v0, 0x11577c
    a0 = 0x22 << 16;                                            // 0x00115770: lui $a0, 0x22
    func_00116508();  // 0x1164d0                                // 0x00115774: jal 0x1164d0
    a0 = &str_002211d0;  // "TTY: receive error"                // 0x00115778: addiu $a0, $a0, 0x11d0
label_0x11577c:
    v0 = *(int32_t*)((s1) + 8);                                 // 0x0011577c: lw $v0, 8($s1)
    a2 = s0 & 0xffff;                                           // 0x00115780: andi $a2, $s0, 0xffff
    a1 = *(int32_t*)((s1) + 0x14);                              // 0x00115784: lw $a1, 0x14($s1)
    a0 = *(int32_t*)(s1);                                       // 0x00115788: lw $a0, 0($s1)
    func_00115588();  // 0x115550                                // 0x0011578c: jal 0x115550
    a1 = a1 + v0;                                               // 0x00115790: addu $a1, $a1, $v0
    if (s0 >= 0) goto label_0x1157ac;                           // 0x00115798: bgez $s0, 0x1157ac
    /* nop */                                                   // 0x0011579c: nop 
    a0 = 0x22 << 16;                                            // 0x001157a0: lui $a0, 0x22
    func_00116508();  // 0x1164d0                                // 0x001157a4: jal 0x1164d0
    a0 = &str_002211f8;  // "TTY: send err %d\n"                // 0x001157a8: addiu $a0, $a0, 0x11f8
label_0x1157ac:
    v0 = *(int32_t*)((s1) + 8);                                 // 0x001157ac: lw $v0, 8($s1)
    v0 = v0 + s0;                                               // 0x001157b0: addu $v0, $v0, $s0
    *(uint32_t*)((s1) + 8) = v0;                                // 0x001157b4: sw $v0, 8($s1)
    goto label_0x115890;                                        // 0x001157b8: b 0x115890
    s0 = 0xc;                                                   // 0x001157c0: addiu $s0, $zero, 0xc
    v0 = *(uint16_t*)(s2);                                      // 0x001157c4: lhu $v0, 0($s2)
    v0 = (s0 < v0) ? 1 : 0;                                     // 0x001157c8: slt $v0, $s0, $v0
    if (v0 == 0) goto label_0x115810;                           // 0x001157cc: beqz $v0, 0x115810
    goto label_0x1157e4;                                        // 0x001157d4: b 0x1157e4
    a0 = *(int32_t*)((s1) + 0x18);                              // 0x001157d8: lw $a0, 0x18($s1)
    /* nop */                                                   // 0x001157dc: nop 
    a0 = *(int32_t*)((s1) + 0x18);                              // 0x001157e0: lw $a0, 0x18($s1)
label_0x1157e4:
    v0 = v1 + s0;                                               // 0x001157e4: addu $v0, $v1, $s0
    v1 = *(uint8_t*)(v0);                                       // 0x001157e8: lbu $v1, 0($v0)
    s0 = s0 + 1;                                                // 0x001157ec: addiu $s0, $s0, 1
    v0 = g_00221204;  // Global at 0x00221204                   // 0x001157f0: lw $v0, 0xc($a0)
    *(uint8_t*)(v0) = v1;                                       // 0x001157f4: sb $v1, 0($v0)
    func_001156d0();  // 0x115690                                // 0x001157f8: jal 0x115690
    a0 = *(int32_t*)((s1) + 0x18);                              // 0x001157fc: lw $a0, 0x18($s1)
    v0 = *(uint16_t*)(s2);                                      // 0x00115800: lhu $v0, 0($s2)
    v0 = (s0 < v0) ? 1 : 0;                                     // 0x00115804: slt $v0, $s0, $v0
    /* bnezl $v0, 0x1157e0 */                                   // 0x00115808: bnezl $v0, 0x1157e0
    v1 = *(int32_t*)((s1) + 0x14);                              // 0x0011580c: lw $v1, 0x14($s1)
label_0x115810:
    *(uint32_t*)((s1) + 8) = 0;                                 // 0x00115810: sw $zero, 8($s1)
    goto label_0x115890;                                        // 0x00115814: b 0x115890
label_0x11581c:
    a2 = *(int32_t*)((s1) + 4);                                 // 0x0011581c: lw $a2, 4($s1)
    a0 = *(int32_t*)(s1);                                       // 0x00115820: lw $a0, 0($s1)
    a1 = *(int32_t*)((s1) + 0x10);                              // 0x00115824: lw $a1, 0x10($s1)
    func_001155f0();  // 0x115588                                // 0x00115828: jal 0x115588
    a2 = a2 & 0xffff;                                           // 0x0011582c: andi $a2, $a2, 0xffff
    if (a1 >= 0) goto label_0x115850;                           // 0x00115834: bgezl $a1, 0x115850
    v0 = *(int32_t*)((s1) + 0x10);                              // 0x00115838: lw $v0, 0x10($s1)
    a0 = 0x22 << 16;                                            // 0x0011583c: lui $a0, 0x22
    func_00116508();  // 0x1164d0                                // 0x00115840: jal 0x1164d0
    a0 = &str_00221210;  // "TTY: err ti->wlen=%08x\n"          // 0x00115844: addiu $a0, $a0, 0x1210
    goto label_0x115888;                                        // 0x00115848: b 0x115888
    /* nop */                                                   // 0x0011584c: nop 
label_0x115850:
    v1 = *(int32_t*)((s1) + 4);                                 // 0x00115850: lw $v1, 4($s1)
    v0 = v0 + a1;                                               // 0x00115854: addu $v0, $v0, $a1
    v1 = v1 - a1;                                               // 0x00115858: subu $v1, $v1, $a1
    *(uint32_t*)((s1) + 0x10) = v0;                             // 0x0011585c: sw $v0, 0x10($s1)
    *(uint32_t*)((s1) + 4) = v1;                                // 0x00115860: sw $v1, 4($s1)
    goto label_0x115890;                                        // 0x00115864: b 0x115890
label_0x11586c:
    v0 = *(int32_t*)((s1) + 4);                                 // 0x0011586c: lw $v0, 4($s1)
    if (v0 == 0) goto label_0x115888;                           // 0x00115870: beqz $v0, 0x115888
    /* nop */                                                   // 0x00115874: nop 
    a0 = 0x22 << 16;                                            // 0x00115878: lui $a0, 0x22
    a1 = *(int32_t*)((s1) + 4);                                 // 0x0011587c: lw $a1, 4($s1)
    func_00116508();  // 0x1164d0                                // 0x00115880: jal 0x1164d0
    a0 = &str_00221228;  // "m0:UDNL "                          // 0x00115884: addiu $a0, $a0, 0x1228
label_0x115888:
    *(uint32_t*)((s1) + 0xc) = 0;                               // 0x00115888: sw $zero, 0xc($s1)
label_0x115890:
label_0x115894:
    return;                                                     // 0x0011589c: jr $ra
    sp = sp + 0x40;                                             // 0x001158a0: addiu $sp, $sp, 0x40
}