void func_001332d8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001332d8: addiu $sp, $sp, -0x10
    a2 = 0x4000 << 16;                                          // 0x001332dc: lui $a2, 0x4000
    goto label_0x1332f0;                                        // 0x001332e8: j 0x1332f0
    sp = sp + 0x10;                                             // 0x001332ec: addiu $sp, $sp, 0x10
label_0x1332f0:
    sp = sp + -0x20;                                            // 0x001332f0: addiu $sp, $sp, -0x20
    if (s0 == 0) goto label_0x133324;                           // 0x0013330c: beqz $s0, 0x133324
    /* beqzl $s1, 0x133328 */                                   // 0x00133314: beqzl $s1, 0x133328
    a0 = 0x22 << 16;                                            // 0x00133318: lui $a0, 0x22
    if (s2 >= 0) goto label_0x133348;                           // 0x0013331c: bgez $s2, 0x133348
    /* nop */                                                   // 0x00133320: nop 
label_0x133324:
    a0 = 0x22 << 16;                                            // 0x00133324: lui $a0, 0x22
    a0 = &str_00223e80;  // "E8101207: can't create sj (ADXT_StartMem)\n" // 0x00133330: addiu $a0, $a0, 0x3e80
    return func_00127de8();  // Tail call                        // 0x0013333c: j 0x127d90
    sp = sp + 0x20;                                             // 0x00133340: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x00133344: nop 
label_0x133348:
    func_00131af8();  // 131af8                                // 0x00133348: jal 0x131af8
    /* nop */                                                   // 0x0013334c: nop 
    func_001261a0();  // 1261a0                                // 0x00133350: jal 0x1261a0
    /* nop */                                                   // 0x00133354: nop 
    func_0013f020();  // 13f020                                // 0x0013335c: jal 0x13f020
    if (v0 != 0) goto label_0x133398;                           // 0x00133368: bnez $v0, 0x133398
    func_001261b8();  // 1261b8                                // 0x00133370: jal 0x1261b8
    /* nop */                                                   // 0x00133374: nop 
    a0 = 0x22 << 16;                                            // 0x00133378: lui $a0, 0x22
    a0 = &str_00223eb0;  // "E02080810 ADXT_StartMemIdx: parameter error" // 0x00133380: addiu $a0, $a0, 0x3eb0
    return func_00127de8();  // Tail call                        // 0x00133390: j 0x127d90
    sp = sp + 0x20;                                             // 0x00133394: addiu $sp, $sp, 0x20
label_0x133398:
    func_00131820();  // 131820                                // 0x00133398: jal 0x131820
    /* nop */                                                   // 0x0013339c: nop 
    v0 = 2;                                                     // 0x001333a0: addiu $v0, $zero, 2
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001333a4: sb $v0, 2($s0)
    *(uint8_t*)((s0) + 0x98) = 0;                               // 0x001333a8: sb $zero, 0x98($s0)
    return func_001261d0();  // Tail call                        // 0x001333bc: j 0x1261b8
    sp = sp + 0x20;                                             // 0x001333c0: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x001333c4: nop 
    sp = sp + -0x30;                                            // 0x001333c8: addiu $sp, $sp, -0x30
    if (s2 == 0) goto label_0x133400;                           // 0x001333e8: beqz $s2, 0x133400
    /* beqzl $s1, 0x133404 */                                   // 0x001333f0: beqzl $s1, 0x133404
    a0 = 0x22 << 16;                                            // 0x001333f4: lui $a0, 0x22
    if (s0 >= 0) goto label_0x133428;                           // 0x001333f8: bgez $s0, 0x133428
    /* nop */                                                   // 0x001333fc: nop 
label_0x133400:
    a0 = 0x22 << 16;                                            // 0x00133400: lui $a0, 0x22
    a0 = &str_00223ee0;  // "E8101207: can't create sj (ADXT_StartMemIdx)" // 0x0013340c: addiu $a0, $a0, 0x3ee0
    return func_00127de8();  // Tail call                        // 0x0013341c: j 0x127d90
    sp = sp + 0x30;                                             // 0x00133420: addiu $sp, $sp, 0x30
    /* nop */                                                   // 0x00133424: nop 
label_0x133428:
    func_00131af8();  // 131af8                                // 0x00133428: jal 0x131af8
    s3 = 0xff << 16;                                            // 0x0013342c: lui $s3, 0xff
    v1 = *(int32_t*)((s1) + 4);                                 // 0x00133430: lw $v1, 4($s1)
    a1 = v1 >> 8;                                               // 0x00133434: sra $a1, $v1, 8
    a0 = v1 << 8;                                               // 0x00133438: sll $a0, $v1, 8
    v0 = (unsigned)v1 >> 0x18;                                  // 0x0013343c: srl $v0, $v1, 0x18
    v1 = v1 << 0x18;                                            // 0x00133440: sll $v1, $v1, 0x18
    a0 = a0 & s3;                                               // 0x00133444: and $a0, $a0, $s3
    a1 = a1 & 0xff00;                                           // 0x00133448: andi $a1, $a1, 0xff00
    v0 = v0 | v1;                                               // 0x0013344c: or $v0, $v0, $v1
    a0 = a0 | a1;                                               // 0x00133450: or $a0, $a0, $a1
    v0 = v0 | a0;                                               // 0x00133454: or $v0, $v0, $a0
    v0 = (s0 < v0) ? 1 : 0;                                     // 0x00133458: slt $v0, $s0, $v0
    /* beqzl $v0, 0x133518 */                                   // 0x0013345c: beqzl $v0, 0x133518
    if (s0 < 0) goto label_0x133518;                            // 0x00133464: bltzl $s0, 0x133518
    func_001261a0();  // 1261a0                                // 0x0013346c: jal 0x1261a0
    /* nop */                                                   // 0x00133470: nop 
    a1 = 0x4000 << 16;                                          // 0x00133474: lui $a1, 0x4000
    v0 = s0 << 3;                                               // 0x00133478: sll $v0, $s0, 3
    v0 = v0 + s1;                                               // 0x0013347c: addu $v0, $v0, $s1
    v1 = *(int32_t*)((v0) + 8);                                 // 0x00133480: lw $v1, 8($v0)
    a2 = v1 >> 8;                                               // 0x00133484: sra $a2, $v1, 8
    v0 = v1 << 8;                                               // 0x00133488: sll $v0, $v1, 8
    a2 = a2 & 0xff00;                                           // 0x0013348c: andi $a2, $a2, 0xff00
    a0 = (unsigned)v1 >> 0x18;                                  // 0x00133490: srl $a0, $v1, 0x18
    v0 = v0 & s3;                                               // 0x00133494: and $v0, $v0, $s3
    v1 = v1 << 0x18;                                            // 0x00133498: sll $v1, $v1, 0x18
    a0 = a0 | v1;                                               // 0x0013349c: or $a0, $a0, $v1
    v0 = v0 | a2;                                               // 0x001334a0: or $v0, $v0, $a2
    a0 = a0 | v0;                                               // 0x001334a4: or $a0, $a0, $v0
    func_0013f020();  // 13f020                                // 0x001334a8: jal 0x13f020
    a0 = s1 + a0;                                               // 0x001334ac: addu $a0, $s1, $a0
    if (v0 != 0) goto label_0x1334e8;                           // 0x001334b4: bnez $v0, 0x1334e8
    func_001261b8();  // 1261b8                                // 0x001334bc: jal 0x1261b8
    /* nop */                                                   // 0x001334c0: nop 
    a0 = 0x22 << 16;                                            // 0x001334c4: lui $a0, 0x22
    a0 = &str_00223f10;  // "E8101201 adxt_trap_entry: not enough data" // 0x001334cc: addiu $a0, $a0, 0x3f10
    return func_00127de8();  // Tail call                        // 0x001334e0: j 0x127d90
    sp = sp + 0x30;                                             // 0x001334e4: addiu $sp, $sp, 0x30
label_0x1334e8:
    func_00131820();  // 131820                                // 0x001334e8: jal 0x131820
    /* nop */                                                   // 0x001334ec: nop 
    v0 = 2;                                                     // 0x001334f0: addiu $v0, $zero, 2
    *(uint8_t*)((s2) + 2) = v0;                                 // 0x001334f4: sb $v0, 2($s2)
    *(uint8_t*)((s2) + 0x98) = 0;                               // 0x001334f8: sb $zero, 0x98($s2)
    return func_001261d0();  // Tail call                        // 0x00133510: j 0x1261b8
    sp = sp + 0x30;                                             // 0x00133514: addiu $sp, $sp, 0x30
label_0x133518:
    return;                                                     // 0x00133528: jr $ra
    sp = sp + 0x30;                                             // 0x0013352c: addiu $sp, $sp, 0x30
}